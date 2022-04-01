/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** draw_game
*/

#include "includes.h"
#include "game.h"

static void draw_player(game_t * g)
{
    Draw_Sprite(g->player.pv_bar.sprite);
    //Draw_Sprite(g->player.pa_bar.sprite);
    Draw_Sprite(g->player.body.sprite);
}

void draw_game(game_t *g)
{
    for (int i = 0; i < g->scene[0].nb_elem; i++)
        Draw_Sprite(g->scene[0].elem[i].sprite);
    for (int i = 0; i < g->scene[0].nb_interest; i++)
        Draw_Sprite(g->scene[0].interest[i].body.sprite);
    for (int i = 0; i < g->scene[0].nb_button; i++)
        Draw_Sprite(g->scene[0].button[i].body.sprite);
    draw_player(g);
}
