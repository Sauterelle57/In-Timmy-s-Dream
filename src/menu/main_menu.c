/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_menu
*/

#include "includes.h"
#include "main_menu.h"

scene_t init_menu(game_t *g)
{
    button_t *buttons = init_menu_button(g->window);
    int nb_button = 0;
    body_t *elem = init_menu_elem(g->window);
    int nb_elem = 2;
    interest_t *interest = init_menu_interest(g->window);
    int nb_interest = 0;
    sfMusic *scene_music = sfMusic_createFromFile("music/back.ogg");
    scene_t game = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    game.draw = &draw_menu;
    game.event = &event_menu;
    game.anim = &anim_menu;
    return (game);
}
