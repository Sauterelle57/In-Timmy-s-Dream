/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** anim_game
*/

#include "includes.h"
#include "game.h"
#include "player.h"
void go_menu_lose(game_t *g, int i);

static void anim_interest(game_t *g)
{
    static int vector[4] = {144, 48, 144, 48};

    for (int i = 0; i < 2; i++) {
        g->scene[0].interest[i].body.rect.left += g->scene[0].interest[i].body.
        rect.left >= vector[i * 2] ? -vector[i * 2] : vector[i * 2 + 1];
        Set_Texture_Rect(g->scene[0].interest[i].body.sprite,
        g->scene[0].interest[i].body.rect);
    }
    if (g->player.lvl == 2)
        g->scene[0].interest[1].line = 3;
}

void anim_game(game_t *g)
{
    static float tmp = 0.0;
    static float tmp2 = 0.0;
    float delay_player = g->player.speed == SPEED ? 0.15 : 0.08;

    if (g->t.sec - tmp >= 0.15) {
        anim_interest(g);
        tmp = g->t.sec;
    }
    if (g->t.sec - tmp2 >= delay_player) {
        g->player.body.rect.left += g->player.body.rect.left >= 144 ? -144 :
        48;
        Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
        tmp2 = g->t.sec;
    }
    if (g->player.pv <= 0)
        go_menu_lose(g, 0);
}
