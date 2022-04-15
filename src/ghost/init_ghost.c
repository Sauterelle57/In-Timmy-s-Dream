/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_ghost
*/

#include "includes.h"
#include "ghost.h"

scene_t init_ghost(game_t *g)
{
    int nb_button = 2;
    button_t *buttons = init_ghost_button(g->window, nb_button);
    int nb_elem = 1;
    body_t *elem = init_ghost_elem(g->window, nb_elem);
    int nb_interest = 4;
    interest_t *interest = init_ghost_interest(g->window, nb_interest);
    scene_t ghost = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest};

    ghost.draw = &draw_ghost;
    ghost.event = &event_ghost;
    ghost.anim = &anim_ghost;
    return (ghost);
}

