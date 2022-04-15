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
    int nb_button = 0;
    body_t *elem = create_maze(elem);
    int nb_elem = 376;
    interest_t *interest = init_combat_interest(g->window);
    int nb_interest = 0;
    scene_t combat = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest};

    maze_generation(23, 15);
    combat.draw = &draw_combat;
    combat.event = &event_combat;
    combat.anim = &anim_combat;
    return (combat);
}
