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
    sfMusic *scene_music = sfMusic_createFromFile("music/back.ogg");
    scene_t game = {1, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    game.draw = &draw_loading;
    game.event = &event_loading;
    game.anim = &anim_loading;
    return (game);
}
