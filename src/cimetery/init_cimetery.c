/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_cimetery
*/

#include "includes.h"
#include "cimetery.h"

scene_t init_cimetery(game_t *g)
{
    int nb_button = 2;
    button_t *buttons = init_cimetery_button(g->window, nb_button);
    int nb_elem = 2;
    body_t *elem = init_cimetery_elem(g->window, nb_elem);
    int nb_interest = 5;
    interest_t *interest = init_cimetery_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile("music/back.ogg");
    scene_t cimetery = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    cimetery.draw = &draw_cimetery;
    cimetery.event = &event_cimetery;
    cimetery.anim = &anim_cimetery;
    sfMusic_setLoop(cimetery.scene_music, sfTrue);
    return (cimetery);
}

