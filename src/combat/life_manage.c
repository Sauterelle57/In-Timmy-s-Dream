/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_game_elm
*/

#include "includes.h"
#include "combat.h"
#include "interest.h"

void life_hit(game_t *g)
{
    int random = rand() % 10;
    if (random == 1) {
        g->player.pv--;
        printf("Life : %d\n", g->player.pv);
        g->player.pv_bar.rect.left = g->player.pv_bar.rect.left + 25;
        Set_Texture_Rect(g->player.pv_bar.sprite, g->player.pv_bar.rect);
    }
}
