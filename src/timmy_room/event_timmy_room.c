/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_timmy_room
*/

#include "includes.h"
#include "timmy_room.h"

static void check_action(game_t *g)
{
    sfFloatRect player = Get_bounds(g->player.body.sprite);

    for (int i = 0; i < g->scene[13].nb_interest; i++)
        if (Rect_Intersect(g->scene[13].interest[i].body, &player))
            g->scene[13].interest[i].on_click(g);
}

void event_timmy_room(game_t *g)
{
    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        quit_game(g, 0);
    if (Key_Pressed(sfKeySpace) || Key_Pressed(sfKeyE))
        check_action(g);
}
