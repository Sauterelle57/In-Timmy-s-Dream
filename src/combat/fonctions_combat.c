/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions_game
*/

#include "includes.h"
#include "combat.h"

void draw_combat(game_t *g)
{
    for (int i = 0; i < g->scene[2].nb_elem; i++)
        Draw_Sprite(g->scene[2].elem[i].sprite);
    for (int i = 0; i < g->scene[2].nb_interest; i++)
        Draw_Sprite(g->scene[2].interest[i].body.sprite);
    for (int i = 0; i < g->scene[2].nb_button; i++)
        Draw_Sprite(g->scene[2].button[i].body.sprite);
    draw_player(g);
}

void event_combat(game_t *g)
{
    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        sfRenderWindow_close(g->window);
    if (Key_Pressed(sfKeyLeft))
        pass();//my_printf("Key Left pressed\n");
    if (Key_Pressed(sfKeyRight))
        pass();//my_printf("Key Right pressed\n");
}

void anim_combat(game_t *g)
{
    static float tmp = 0.0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp > 0.05) {
        for (int i = 0; i < g->scene[2].nb_elem; i++) {
            g->scene[2].elem[i].rect.left += 0;
            Set_Texture_Rect(g->scene[2].elem[i].sprite,
            g->scene[2].elem[i].rect);
        }
        tmp = g->t.sec;
    }
}
