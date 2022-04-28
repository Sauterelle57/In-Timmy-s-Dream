/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** anim_inventory
*/

#include "includes.h"
#include "inventory.h"

static void anim_interest(game_t *g)
{
    static int vector[8] = {144, 48, 144, 48, 144, 48, 144, 48};

    for (int i = 0; i < 4; i++) {
        g->scene[6].interest[i].body.rect.left += g->scene[6].interest[i].body.
        rect.left >= vector[i * 2] ? -vector[i * 2] : vector[i * 2 + 1];
        Set_Texture_Rect(g->scene[6].interest[i].body.sprite,
        g->scene[6].interest[i].body.rect);
    }
}

void anim_inventory(game_t *g)
{
    static float tmp = 0.0;
    static float tmp2 = 0.0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp >= 0.15) {
        g->player.body.rect.left += g->player.body.rect.left >= 144 ? -144 :
        48;
        Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
        tmp = g->t.sec;
    }
    if (g->t.sec - tmp2 >= 0.05) {
        g->scene[6].elem[0].rect.left -= 5;
        Set_Texture_Rect(g->scene[6].elem[0].sprite, g->scene[6].elem[0].rect);
        tmp2 = g->t.sec;
    }
}
