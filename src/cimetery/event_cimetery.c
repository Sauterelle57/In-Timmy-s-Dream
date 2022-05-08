/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_cimetery
*/

#include "includes.h"
#include "cimetery.h"
#include "player.h"
void go_pause(game_t *g, int i);

static void check_skeleton(game_t *g, int i)
{
    static int tmp1 = 0;
    static int tmp2 = 0;
    static int tmp3 = 0;
    static int tmp4 = 0;

    if (i == 6 && g->player.lvl < 9 && tmp1 == 0) {
        g->warning = 1;
        tmp1 = 1;
    } else if (i == 7 && g->player.lvl < 9 && tmp2 == 0) {
        g->warning = 1;
        tmp2 = 1;
    }
    if (i == 8 && g->player.lvl < 9 && tmp3 == 0) {
        g->warning = 1;
        tmp3 = 1;
    } else if (i == 9 && g->player.lvl < 9 && tmp4 == 0) {
        g->warning = 1;
        tmp4 = 1;
    }
}

static void check_action(game_t *g)
{
    sfFloatRect player = Get_bounds(g->player.body.sprite);

    for (int i = 0; i < g->scene[8].nb_interest; i++)
        if (Rect_Intersect(g->scene[8].interest[i].body, &player)) {
            check_skeleton(g, i);
            g->scene[8].interest[i].on_click(g, g->scene[8].interest->line);
        }
}

static void check_button(game_t *g, sfVector2i pos, sfVector2u size)
{
    button_t button;

    g->t.sec = Get_Time(g->t.clock);
    for (int i = 0; i < g->scene[8].nb_button; i++) {
        button = g->scene[8].button[i];
        if (Mouse_Pressed(sfMouseLeft) && g->t.sec - g->cooldown > 0.5 &&
        sfIntRect_contains(&(sfIntRect){button.body.pos.x, button.body.pos.y,
        button.size.x, button.size.y}, pos.x * (1920.0 / size.x), pos.y *
        (1080.0 / size.y))) {
            sfSound_play(g->m.click);
            Set_Texture(button.body.sprite, BUTTON[button.png + 2]);
            button.on_click(g);
            g->cooldown = g->t.sec;
        } else if (sfIntRect_contains(&(sfIntRect){button.body.pos.x,
        button.body.pos.y, button.size.x, button.size.y}, pos.x * (1920.0 /
        size.x), pos.y * (1080.0 / size.y))) {
            Set_Texture(button.body.sprite, BUTTON[button.png + 1]);
        } else
            Set_Texture(g->scene[8].button[i].body.sprite, BUTTON[button.png]);
    }
}

void event_cimetery(game_t *g)
{
    g->t.sec = Get_Time(g->t.clock);
    if (g->event.type == sfEvtClosed)
        quit_game(g, 0);
    if ((Key_Pressed(sfKeySpace) || Key_Pressed(sfKeyE)) && g->t.sec -
    g->cooldown > 0.3) {
        check_action(g);
        g->cooldown = g->t.sec;
    }
    if (Key_Pressed(sfKeyEscape) && g->t.sec - g->cooldown > 0.3) {
        go_pause(g, 0);
        g->cooldown = g->t.sec;
    }
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
    if (Key_Pressed(sfKeyA) && g->t.sec - g->cooldown >= 0.15) {
        g->player.speed = g->player.speed == SPEED ? SPEED + 5 : SPEED;
        g->cooldown = g->t.sec;
    }
}
