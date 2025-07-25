/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** draw_vampire
*/

#include "includes.h"
#include "vampire.h"

void draw_vampire(game_t *g)
{
    Draw_Sprite(g->scene[3].elem[0].sprite);
    for (int i = 0; i < 4; i++)
        Draw_Sprite(g->scene[3].interest[i].body.sprite);
    for (int i = 0; i < g->scene[3].nb_button; i++)
        Draw_Sprite(g->scene[3].button[i].body.sprite);
    draw_player(g);
}
