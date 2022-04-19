/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions_loading
*/

#include "includes.h"
#include "interest.h"
scene_t init_game(game_t *g);

void draw_loading(game_t *g)
{
    Draw_Sprite(g->scene[7].elem[0].sprite);
}

void event_loading(game_t *g)
{
    static int loading_game = 0;
    static float tmp = 0.0;

    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        quit_game(g);
    g->t.sec = Get_Time(g->t.clock);
    if (loading_game == 0) {
        loading_game = 1;
        g->scene[0] = init_game(g);
        g->scene[0].charged = 1;
    }
    if (g->scene[0].charged = 1 && g->t.sec - tmp >= 1)
        go_game(g);
}

void anim_loading(game_t *g)
{
    return;
}
