/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_combat
*/

#include "includes.h"
#include "combat.h"

scene_t init_combat(game_t *g)
{
    button_t *buttons = init_combat_button(g->window);
    int nb_button = 2;
    body_t *elem = init_combat_elem(g->window);
    int nb_elem = 2;
    interest_t *interest = init_combat_interest(g->window);
    int nb_interest = 2;
    scene_t game = {buttons, nb_button, elem, nb_elem, interest,
    nb_interest};

    game.draw = &draw_combat;
    game.event = &event_combat;
    game.anim = &anim_combat;
    return (game);
}