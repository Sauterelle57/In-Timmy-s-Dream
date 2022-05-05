/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** anim_htp
*/

#include "includes.h"
#include "how_to_play.h"
#include "player.h"

static void anim_players(game_t *g)
{
    static float tmp = 0.0;
    float delay = g->player.speed == SPEED ? 0.2 : 0.1;

    if (g->t.sec - tmp >= delay)
        for (int i = 1; i < 4; i++) {
            g->scene[10].interest[i].body.rect.left += g->scene[10].interest[i]
            .body.rect.left >= 144 ? -144 : 48;
            Set_Texture_Rect(g->scene[10].interest[i].body.sprite, g->scene[10]
            .interest[i].body.rect);
        }
}

void anim_htp(game_t *g)
{
    static float tmp = 0.0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp >= 0.11) {
        for (int i = 0; i < 8; i++) {
            g->scene[g->curent_scene].elem[i].rect.left += i;
            Set_Texture_Rect(g->scene[g->curent_scene].elem[i].sprite,
            g->scene[g->curent_scene].elem[i].rect);
        }
        anim_players(g);
        g->scene[10].interest[0].body.rect.left += g->scene[10].interest[0].
        body.rect.left >= 144 ? -144 : 48;
        Set_Texture_Rect(g->scene[10].interest[0].body.sprite, g->scene[10].
        interest[0].body.rect);
        tmp = g->t.sec;
    }
}
