/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** draw_ghost
*/

#include "includes.h"
#include "ghost.h"

void draw_ghost(game_t *g)
{
    Draw_Sprite(g->scene[4].elem[0].sprite);
    for (int i = 0; i < g->scene[4].nb_interest; i++)
        Draw_Sprite(g->scene[4].interest[i].body.sprite);
    draw_player(g);
    for (int i = 0; i < g->scene[4].nb_button; i++)
        Draw_Sprite(g->scene[4].button[i].body.sprite);
}
