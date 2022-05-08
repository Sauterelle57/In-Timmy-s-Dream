/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** check_interest_on_click
*/

#include "includes.h"
#include "game.h"
#include "player.h"
#include "interest.h"
void go_pause(game_t *g, int i);

void check_action(game_t *g)
{
    sfFloatRect player = Get_bounds(g->player.body.sprite);

    for (int i = 0; i < g->scene[0].nb_interest; i++)
        if (Rect_Intersect(g->scene[0].interest[i].body, &player)) {
            g->scene[0].interest[i].on_click(g, g->scene[0].interest[i].line);
            return;
        }
}

void check_button(game_t *g, sfVector2i pos, sfVector2u size)
{
    button_t button;

    for (int i = 0; i < g->scene[g->curent_scene].nb_button; i++) {
        button = g->scene[g->curent_scene].button[i];
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
            Set_Texture(g->scene[g->curent_scene].button[i].body.sprite,
            BUTTON[button.png]);
    }
}

static void check_event_2(game_t *g)
{
    if (g->player.lvl >= 5) {
        g->player.inventory[7].own = 0;
        g->scene[0].interest[16].on_click = &go_cimetery;
    }
}

void event_game(game_t *g)
{
    static float tmp = 0.0;

    if (g->event.type == sfEvtClosed)
        quit_game(g, 0);
    if ((Key_Pressed(sfKeySpace) || Key_Pressed(sfKeyE)) && g->t.sec -
    g->cooldown > 0.5) {
        check_action(g);
        g->cooldown = g->t.sec;
    }
    if (Key_Pressed(sfKeyA) && g->t.sec - g->cooldown > 0.15) {
        g->player.speed = g->player.speed == SPEED ? SPEED + 5 : SPEED;
        g->cooldown = g->t.sec;
    }
    if (Key_Pressed(sfKeyEscape) && g->t.sec - g->cooldown > 0.5) {
        go_pause(g, 0);
        g->cooldown = g->t.sec;
    }
    check_event_2(g);
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
}
