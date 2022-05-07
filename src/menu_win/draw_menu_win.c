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
    Draw_Sprite(g->scene[11].button[0].body.sprite);
    sfRenderWindow_drawText(g->window, g->scene[11].button[0].text, NULL);
}
