/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_forest
*/

#include "includes.h"
#include "forest.h"

scene_t init_forest(game_t *g)
{
    int nb_button = 2;
    button_t *buttons = init_forest_button(g->window, nb_button);
    int nb_elem = 7;
    body_t *elem = init_forest_elem(g->window, nb_elem);
    int nb_interest = 5;
    interest_t *interest = init_forest_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile("music/back.ogg");
    scene_t forest = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    forest.draw = &draw_forest;
    forest.event = &event_forest;
    forest.anim = &anim_forest;
    sfMusic_setLoop(forest.scene_music, sfTrue);
    return (forest);
}

