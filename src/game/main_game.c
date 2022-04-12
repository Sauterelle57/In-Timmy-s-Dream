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
    int nb_button = 1;
    button_t *buttons = init_game_button(g->window);
    int nb_elem = 100;
    body_t *elem = init_game_elem(g->window, nb_elem);
    int nb_interest = 17;
    interest_t *interest = init_game_interest(g->window, nb_interest);
    scene_t game = {buttons, nb_button, elem, nb_elem, interest,
    nb_interest};

    game.draw = &draw_game;
    game.event = &event_game;
    game.anim = &anim_game;
    return (game);
}
