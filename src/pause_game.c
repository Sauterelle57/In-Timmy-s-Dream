/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** pause_game
*/

#include "includes.h"

static void pause_event(game_t *g)
{
    g->t.sec = Get_Time(g->t.clock);
    if (sfKeyboard_isKeyPressed(sfKeyP) && g->t.sec - g->t.pause > 0.3)
        pause_game(g);
}

void pause_game(game_t *g)
{
    sfEvent event;

    g->t.pause = g->t.sec;
    g->pause = g->pause == 0 ? 1 : 0;
    if (g->pause == 1)
        sfMusic_pause(g->scene[g->curent_scene].scene_music);
    else
        sfMusic_play(g->scene[g->curent_scene].scene_music);
    while (g->pause == 1)
        if (sfRenderWindow_pollEvent(g->window, &event))
            pause_event(g);
}
