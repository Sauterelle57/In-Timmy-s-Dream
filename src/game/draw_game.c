/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** draw_game
*/

#include "includes.h"
#include "game.h"

void draw_game(game_t *g)
{
    Draw_Sprite(g->scene[0].elem[0].sprite);
    for (int i = 0; i < 2; i++)
        Draw_Sprite(g->scene[0].interest[i].body.sprite);
    draw_player(g);
    for (int i = 0; i < g->scene[0].nb_button; i++)
        Draw_Sprite(g->scene[0].button[i].body.sprite);
}
