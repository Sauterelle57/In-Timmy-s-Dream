/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** check_interest_on_click
*/

#include "includes.h"
#include "game.h"

static void check_action(game_t *g)
{
    sfVector2f size = {32, 50};
    sfFloatRect player = Get_bounds(g->player.body.sprite);

    for (int i = 0; i < g->scene[0].nb_interest; i++)
        if (Rect_Intersect(g->scene[0].interest[i].body, &player))
            g->scene[0].interest[i].on_click(g);
}

void event_game(game_t *g)
{
    static int cooldown = 0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        sfRenderWindow_close(g->window);
    if (Key_Pressed(sfKeySpace)) {
        cooldown = 1;
        check_action(g);
    }
    if (g->event.type == sfEvtKeyReleased)
        cooldown = 0;
    if (Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyDown) ||
    Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyLeft))
        movement(g);
    else
        Set_Texture(g->player.body.sprite, NPC[16]);
}
