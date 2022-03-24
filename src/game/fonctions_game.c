/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions_game
*/

#include "struct.h"
#include "define.h"

void draw_game(game_t *g)
{
    for (int i = 0; i < g->scene[0].nb_elem; i++)
        Draw_Sprite(g->scene[0].elem[i].sprite);
    for (int i = 0; i < g->scene[0].nb_interest; i++)
        Draw_Sprite(g->scene[0].interest[i].body.sprite);
    for (int i = 0; i < g->scene[0].nb_button; i++)
        Draw_Sprite(g->scene[0].button[i].body.sprite);
}

void event_game(game_t *g)
{
    if (Key_Pressed(sfKeyLeft))
        my_printf("Key Left pressed\n");
    else if (Key_Pressed(sfKeyRight))
        my_printf("Key Right pressed\n");
}

void anim_game(game_t *g)
{
    static float tmp = 0.0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp > 0.05)
        for (int i = 0; i < g->scene[0].nb_elem; i++)
            g->scene[0].interest[i].body.rect.left +=
            g->scene[0].interest[i].body.rect.left > 650 ? -650 : 50;
}
