/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** draw_inventory
*/

#include "includes.h"
#include "inventory.h"

void draw_inventory(game_t *g)
{
    Draw_Sprite(g->scene[6].elem[0].sprite);
    for (int i = 0; i < g->scene[6].nb_interest; i++) //affichage interest point
        Draw_Sprite(g->scene[6].interest[i].body.sprite);
    for (int i = 0; i < g->scene[6].nb_button; i++)
        Draw_Sprite(g->scene[6].button[i].body.sprite);
    draw_player(g);
    for (int i = 1; i < g->scene[6].nb_elem; i++) //affichage box collisions
        Draw_Sprite(g->scene[6].elem[i].sprite);
}
