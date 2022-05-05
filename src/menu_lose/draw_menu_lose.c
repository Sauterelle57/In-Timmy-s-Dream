/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** draw_menu_lose
*/

#include "includes.h"
#include "menu_lose.h"

void draw_menu_lose(game_t *g)
{
    Draw_Sprite(g->scene[10].elem[0].sprite);
    for (int i = 0; i < g->scene[10].nb_button; i++) {
        Draw_Sprite(g->scene[10].button[i].body.sprite);
        sfRenderWindow_drawText(g->window, g->scene[10].button[i].text, NULL);
    }
}
