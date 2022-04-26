/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** draw_forest
*/

#include "includes.h"
#include "forest.h"

void draw_forest(game_t *g)
{
    Draw_Sprite(g->scene[5].elem[0].sprite);
    for (int i = 0; i < 4; i++) //affichage interest point
        Draw_Sprite(g->scene[5].interest[i].body.sprite);
    draw_player(g);
    for (int i = 0; i < g->scene[5].nb_button; i++)
        Draw_Sprite(g->scene[5].button[i].body.sprite);
    for (int i = 2; i < g->scene[5].nb_elem; i++) //affichage box collisions
        Draw_Sprite(g->scene[5].elem[i].sprite);
}
