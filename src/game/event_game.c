/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** check_interest_on_click
*/

#include "includes.h"
#include "game.h"

void check_action(game_t *g)
{
    sfVector2f size = {32, 50};
    sfFloatRect player = Get_bounds(g->player.body.sprite);

    for (int i = 0; i < g->scene[0].nb_interest; i++)
        if (Rect_Intersect(g->scene[0].interest[i].body, &player))
            g->scene[0].interest[i].on_click(g);
}

void check_button(game_t *g, sfVector2i pos, sfVector2u size)
{
    static float tmp = 0.0;
    button_t button;

    g->t.sec = Get_Time(g->t.clock);
    for (int i = 0; i < g->scene[0].nb_button; i++) {
        button = g->scene[0].button[i];
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
            Set_Texture(g->scene[0].button[i].body.sprite, BUTTON[button.png]);
    }
}

void event_game(game_t *g)
{
    g->t.sec = Get_Time(g->t.clock);
    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        sfRenderWindow_close(g->window);
    g->t.sec = Get_Time(g->t.clock);
    if (Key_Pressed(sfKeySpace) && g->t.sec - g->cooldown > 0.5) {
        check_action(g);
        g->cooldown = g->t.sec;
    }
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
    if (Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyDown) ||
    Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyLeft))
        movement(g);
    else
        Set_Texture(g->player.body.sprite, NPC[16]);
}
