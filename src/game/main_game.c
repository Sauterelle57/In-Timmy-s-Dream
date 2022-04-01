/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_game
*/

#include "includes.h"
#include "game.h"

scene_t init_game(game_t *g)
{
    button_t *buttons = init_game_button(g->window);
    int nb_button = 1;
    body_t *elem = init_game_elem(g->window);
    int nb_elem = 3;
    interest_t *interest = init_game_interest(g->window);
    int nb_interest = 2;
    scene_t game = {buttons, nb_button, elem, nb_elem, interest,
    nb_interest};

    game.draw = &draw_game;
    game.event = &event_game;
    game.anim = &anim_game;
    return (game);
}
