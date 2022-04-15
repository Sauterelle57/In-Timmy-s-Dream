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
}
