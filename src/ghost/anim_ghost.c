/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** anim_ghost
*/

#include "includes.h"
#include "ghost.h"

static void anim_interest(game_t *g)
{
    static int vector[6] = {144, 48, 144, 48, 144, 48};

    for (int i = 0; i < 3; i++) {
        g->scene[4].interest[i].body.rect.left += g->scene[4].interest[i].body.
        rect.left >= vector[i * 2] ? -vector[i * 2] : vector[i * 2 + 1];
        Set_Texture_Rect(g->scene[4].interest[i].body.sprite,
        g->scene[4].interest[i].body.rect);
    }
}

void anim_ghost(game_t *g)
{
    static float tmp = 0.0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp >= 0.15) {
        anim_interest(g);
        g->player.body.rect.left += g->player.body.rect.left >= 144 ? -144 :
        48;
        Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
        tmp = g->t.sec;
    }
}
