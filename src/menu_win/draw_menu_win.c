/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** draw_menu_win
*/

#include "includes.h"
#include "menu_win.h"

void draw_menu_win(game_t *g)
{
    Draw_Sprite(g->scene[11].elem[0].sprite);
    for (int i = 0; i < g->scene[11].nb_button; i++) {
        Draw_Sprite(g->scene[11].button[i].body.sprite);
        sfRenderWindow_drawText(g->window, g->scene[11].button[i].text, NULL);
    }
}
