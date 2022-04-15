/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_inventory
*/

#include "includes.h"
#include "inventory.h"

scene_t init_inventory(game_t *g)
{
    int nb_button = 1;
    button_t *buttons = init_inventory_button(g->window, nb_button);
    int nb_elem = 1;
    body_t *elem = init_inventory_elem(g->window, nb_elem);
    int nb_interest = 0;
    interest_t *interest = init_inventory_interest(g->window, nb_interest);
    scene_t inventory = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest};

    inventory.draw = &draw_inventory;
    inventory.event = &event_inventory;
    inventory.anim = &anim_inventory;
    return (inventory);
}
