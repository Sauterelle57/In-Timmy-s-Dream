/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** draw_cimetery
*/

#include "includes.h"
#include "cimetery.h"

void draw_cimetery(game_t *g)
{
    Draw_Sprite(g->scene[8].elem[0].sprite);
    for (int i = 0; i < 4; i++) //affichage interest point
        Draw_Sprite(g->scene[8].interest[i].body.sprite);
    draw_player(g);
    Draw_Sprite(g->scene[8].elem[1].sprite);
    for (int i = 0; i < g->scene[8].nb_button; i++)
        Draw_Sprite(g->scene[8].button[i].body.sprite);
    //for (int i = 1; i < g->scene[8].nb_elem; i++) //affichage box collisions
    //    Draw_Sprite(g->scene[8].elem[i].sprite);
}
