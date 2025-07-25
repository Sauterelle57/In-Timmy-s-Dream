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
    char *music = g->troll == 1 ? "music/The_Abyss.ogg" : "music/rickroll.ogg";
    int nb_button = 1;
    button_t *buttons = init_inventory_button(g->window, nb_button);
    int nb_elem = 3;
    body_t *elem = init_inventory_elem(g->window, nb_elem);
    int nb_interest = 0;
    interest_t *interest = init_inventory_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile(music);
    sfVertexArray *array = sfVertexArray_create();
    scene_t inventory = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music, array};

    for (int i = 0; i < NB_PIXELS; i++)
        add_pixel(inventory.array, (sfVector2f){0, 0}, (sfColor){0, 0, 0, 0});
    inventory.draw = &draw_inventory;
    inventory.event = &event_inventory;
    inventory.anim = &anim_inventory;
    sfMusic_setLoop(inventory.scene_music, sfTrue);
    sfMusic_setVolume(inventory.scene_music, g->params[VOL]);
    return (inventory);
}
