/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** anim_game
*/

#include "includes.h"
#include "game.h"

static void anim_interest(game_t *g)
{
    static int vector[4] = {144, 48, 144, 48};

    for (int i = 0; i < 2; i++) {
        g->scene[0].interest[i].body.rect.left += g->scene[0].interest[i].body.
        rect.left >= vector[i * 2] ? -vector[i * 2] : vector[i * 2 + 1];
        Set_Texture_Rect(g->scene[0].interest[i].body.sprite,
        g->scene[0].interest[i].body.rect);
    }
}

void anim_game(game_t *g)
{
    static float tmp = 0.0;

    if (g->t.sec - tmp >= 0.15) {
        anim_interest(g);
        g->player.body.rect.left += g->player.body.rect.left >= 144 ? -144 : 48;
        Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
        tmp = g->t.sec;
    }
}
