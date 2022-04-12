/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** draw_player
*/

#include "includes.h"

void draw_player(game_t * g)
{
    Draw_Sprite(g->player.pv_bar.sprite);
    //Draw_Sprite(g->player.pa_bar.sprite);
    Draw_Sprite(g->player.body.sprite);
}
