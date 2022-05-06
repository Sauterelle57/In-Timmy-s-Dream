/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** draw_timmy_room
*/

#include "includes.h"
#include "timmy_room.h"

void draw_timmy_room(game_t *g)
{
    Draw_Sprite(g->scene[13].elem[0].sprite);
    for (int i = 0; i < g->scene[13].nb_interest; i++) {
        Draw_Sprite(g->scene[13].interest[i].body.sprite);
    }
    draw_player(g);
}
