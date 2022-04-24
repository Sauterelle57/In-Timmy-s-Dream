/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_cimetery
*/

#include "includes.h"
#include "cimetery.h"
#include "player.h"

static void check_action(game_t *g)
{
    sfFloatRect player = Get_bounds(g->player.body.sprite);

    for (int i = 0; i < g->scene[8].nb_interest; i++)
        if (Rect_Intersect(g->scene[8].interest[i].body, &player))
            g->scene[8].interest[i].on_click(g);
}

static void check_button(game_t *g, sfVector2i pos, sfVector2u size)
{
    static float tmp = 0.0;
    button_t button;

    g->t.sec = Get_Time(g->t.clock);
    for (int i = 0; i < g->scene[8].nb_button; i++) {
        button = g->scene[8].button[i];
        if (Mouse_Pressed(sfMouseLeft) && g->t.sec - tmp > 0.5 &&
        sfIntRect_contains(&(sfIntRect){button.body.pos.x, button.body.pos.y,
        button.size.x, button.size.y}, pos.x * (1920.0 / size.x), pos.y *
        (1080.0 / size.y))) {
            Set_Texture(button.body.sprite, BUTTON[button.png + 2]);
            button.on_click(g);
            tmp = g->t.sec;
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
    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        quit_game(g);
    if (Key_Pressed(sfKeySpace) && g->t.sec - g->cooldown > 0.5) {
        check_action(g);
        g->cooldown = g->t.sec;
    }
    if (sfKeyboard_isKeyPressed(sfKeyP) && g->t.sec - g->t.pause > 0.3)
        pause_game(g);
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
    if (Key_Pressed(sfKeyA) && g->t.sec - g->cooldown >= 0.15) {
        g->player.speed = g->player.speed == SPEED ? SPEED + 5 : SPEED;
        g->cooldown = g->t.sec;
    }
}
