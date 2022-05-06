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
    for (int i = 0; i < g->scene[8].nb_interest; i++)
        Draw_Sprite(g->scene[8].interest[i].body.sprite);
    Draw_Sprite(g->player.body.sprite);
    Draw_Sprite(g->scene[g->curent_scene].elem[1].sprite);
    sfRenderWindow_drawVertexArray(g->window, g->scene[8].array, NULL);
    Draw_Sprite(g->player.picture.sprite);
    Draw_Text(g->player.name);
    Draw_Sprite(g->player.pv_bar.sprite);
    for (int i = 0; i < g->scene[8].nb_button; i++)
        Draw_Sprite(g->scene[8].button[i].body.sprite);
}
