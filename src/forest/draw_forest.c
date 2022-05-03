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
    for (int i = 0; i < 4; i++)
        Draw_Sprite(g->scene[5].interest[i].body.sprite);
    Draw_Sprite(g->player.body.sprite);
    Draw_Sprite(g->scene[g->curent_scene].elem[1].sprite);
    sfRenderWindow_drawVertexArray(g->window, g->scene[5].array, NULL);
    Draw_Sprite(g->player.picture.sprite);
    Draw_Text(g->player.name);
    Draw_Sprite(g->player.pv_bar.sprite);
    for (int i = 0; i < g->scene[5].nb_button; i++)
        Draw_Sprite(g->scene[5].button[i].body.sprite);
    //for (int i = 2; i < g->scene[5].nb_elem; i++) //affichage box collisions
    //    Draw_Sprite(g->scene[5].elem[i].sprite);
}
