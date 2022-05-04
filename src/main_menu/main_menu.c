/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_menu
*/

#include "includes.h"
#include "main_menu.h"

void go_menu(game_t *g, int i)
{
    g->previous_scene = g->curent_scene;
    sfMusic_pause(g->scene[g->previous_scene].scene_music);
    if (g->scene[1].charged == 1)
        sfMusic_play(g->scene[1].scene_music);
    charge_scene(g, 1);
    g->curent_scene = 1;
}

scene_t init_menu(game_t *g)
{
    int nb_button = 4;
    button_t *buttons = init_menu_button(g->window, nb_button);
    int nb_elem = 8;
    body_t *elem = init_menu_elem(g->window, nb_elem);
    int nb_interest = 0;
    interest_t *interest = init_menu_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile("music/The_Abyss.ogg");
    scene_t game = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    game.draw = &draw_menu;
    game.event = &event_menu;
    game.anim = &anim_menu;
    return (game);
}
