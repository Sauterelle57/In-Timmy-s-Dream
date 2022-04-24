/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** quit_game
*/

#include "includes.h"

void quit_game(game_t *g)
{
    sfMusic_destroy(g->m.back);
    sfRenderWindow_close(g->window);
    for (int i = 0; i < 9; i++)
        if (g->scene[i].charged == 1)
            sfMusic_destroy(g->scene[i].scene_music);
}
