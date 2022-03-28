/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions_game
*/

#include "includes.h"
#include "dialogue.h"

void draw_dialogue(game_t *g)
{
    for (int i = 0; i < g->scene[2].nb_elem; i++)
        Draw_Sprite(g->scene[2].elem[i].sprite);
    for (int i = 0; i < g->scene[2].nb_interest; i++)
        Draw_Sprite(g->scene[2].interest[i].body.sprite);
    for (int i = 0; i < g->scene[2].nb_button; i++)
        Draw_Sprite(g->scene[2].button[i].body.sprite);
}

void event_dialogue(game_t *g)
{
    if (g->event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(g->window);
    if (Key_Pressed(sfKeyLeft))
        my_printf("Key Left pressed\n");
    if (Key_Pressed(sfKeyRight))
        my_printf("Key Right pressed\n");
}

void anim_dialogue(game_t *g)
{
    static float tmp = 0.0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp > 0.05)
        for (int i = 0; i < g->scene[2].nb_elem; i++)
            g->scene[2].interest[i].body.rect.left +=
            g->scene[2].interest[i].body.rect.left > 650 ? -650 : 50;
}
