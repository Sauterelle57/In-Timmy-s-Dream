/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_vampire
*/

#include "includes.h"
#include "vampire.h"
#include "player.h"
void go_pause(game_t *g, int i);

static void check_action_vamp(game_t *g)
{
    sfFloatRect player = Get_bounds(g->player.body.sprite);

    for (int i = 0; i < g->scene[3].nb_interest; i++)
        if (Rect_Intersect(g->scene[3].interest[i].body, &player)) {
            my_printf("scene %d -> %i\n", g->curent_scene, i);
            g->warning = i == 0 && g->player.lvl == 2 ? 1 : 0;
            g->scene[3].interest[i].on_click(g, g->scene[3].interest[i].line);
            return;
        }
}

static void check_button(game_t *g, sfVector2i pos, sfVector2u size)
{
    button_t button;

    g->t.sec = Get_Time(g->t.clock);
    for (int i = 0; i < g->scene[3].nb_button; i++) {
        button = g->scene[3].button[i];
        if (Mouse_Pressed(sfMouseLeft) && g->t.sec - g->cooldown > 0.5 &&
        sfIntRect_contains(&(sfIntRect){button.body.pos.x, button.body.pos.y,
        button.size.x, button.size.y}, pos.x * (1920.0 / size.x), pos.y *
        (1080.0 / size.y))) {
            Set_Texture(button.body.sprite, BUTTON[button.png + 2]);
            button.on_click(g);
            g->cooldown = g->t.sec;
        } else if (sfIntRect_contains(&(sfIntRect){button.body.pos.x,
        button.body.pos.y, button.size.x, button.size.y}, pos.x * (1920.0 /
        size.x), pos.y * (1080.0 / size.y))) {
            Set_Texture(button.body.sprite, BUTTON[button.png + 1]);
        } else
            Set_Texture(g->scene[3].button[i].body.sprite, BUTTON[button.png]);
    }
}

void event_vampire(game_t *g)
{
    g->t.sec = Get_Time(g->t.clock);
    if (g->event.type == sfEvtClosed)
        quit_game(g, 0);
    if ((Key_Pressed(sfKeySpace) || Key_Pressed(sfKeyE)) && g->t.sec -
    g->cooldown > 0.3) {
        check_action_vamp(g);
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
