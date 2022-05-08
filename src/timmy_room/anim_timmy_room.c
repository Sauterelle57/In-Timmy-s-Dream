/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** anim_timmy_room
*/

#include "includes.h"
#include "timmy_room.h"
#include "player.h"
void go_menu_win(game_t *g, int i);

void anim_timmy_room(game_t *g)
{
    static float tmp = 0.0;
    static float tmp2 = 0.0;
    float delay_player = g->player.speed == SPEED ? 0.15 : 0.08;

    if (g->t.sec - tmp2 >= delay_player) {
        g->player.body.rect.left += g->player.body.rect.left >= 144 ? -144 :
        48;
        Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
        tmp2 = g->t.sec;
    }
    if (g->player.lvl == 10) {
        g->scene[13].interest[0].on_click = go_menu_win;
        g->scene[13].interest[1].line = 23;
    }
}
