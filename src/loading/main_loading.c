/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_loading
*/

#include "includes.h"
#include "my_loading.h"

scene_t init_loading(game_t *g)
{
    int nb_button = 0;
    button_t *buttons = NULL;
    int nb_elem = 1;
    body_t *elem = init_loading_elem(g->window, nb_elem);
    int nb_interest = 0;
    interest_t *interest = NULL;
    sfMusic *scene_music = sfMusic_createFromFile("music/The_Abyss.ogg");
    scene_t loading = {1, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    loading.draw = &draw_loading;
    loading.event = &event_loading;
    loading.anim = &anim_loading;
    sfMusic_setLoop(loading.scene_music, sfTrue);
    sfMusic_setVolume(loading.scene_music, 0);
    return (loading);
}
