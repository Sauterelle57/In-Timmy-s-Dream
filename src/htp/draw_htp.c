/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** draw_htp
*/

#include "includes.h"
#include "how_to_play.h"

void draw_htp(game_t *g)
{
    for (int i = 0; i < 16; i++)
        Draw_Sprite(g->scene[g->curent_scene].elem[i].sprite);
    Draw_Sprite(g->scene[g->curent_scene].elem[13].sprite);
    for (int i = 0; i < g->scene[g->curent_scene].nb_interest; i++)
        Draw_Sprite(g->scene[g->curent_scene].interest[i].body.sprite);
    for (int i = 0; i < g->scene[g->curent_scene].nb_button; i++)
        Draw_Sprite(g->scene[g->curent_scene].button[i].body.sprite);
    sfRenderWindow_drawVertexArray(g->window, g->scene[12].array, 0);
    Set_Scale(g->scene[g->curent_scene].elem[14].sprite, 0.4, 0.4);
    Draw_Sprite(g->scene[g->curent_scene].elem[14].sprite);
}
