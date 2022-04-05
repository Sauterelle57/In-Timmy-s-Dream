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

void anim_combat(game_t *g)
{
    static float tmp = 0.0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp > 0.11) {
        g->player.body.rect.left += g->player.body.rect.left >= 96 ? -96 : 32;
        Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
        tmp = g->t.sec;
    }
}
