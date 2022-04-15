/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_vampire
*/

#include "includes.h"
#include "vampire.h"

scene_t init_vampire(game_t *g)
{
    int nb_button = 2;
    button_t *buttons = init_vampire_button(g->window, nb_button);
    int nb_elem = 20;
    body_t *elem = init_vampire_elem(g->window, nb_elem);
    int nb_interest = 5;
    interest_t *interest = init_vampire_interest(g->window, nb_interest);
    scene_t vampire = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest};

    vampire.draw = &draw_vampire;
    vampire.event = &event_vampire;
    vampire.anim = &anim_vampire;
    return (vampire);
}

