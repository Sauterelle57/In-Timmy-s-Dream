/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_menu
*/

#include "includes.h"
#include "main_menu.h"
void add_pixel(sfVertexArray *pixels, sfVector2f pos, sfColor color);

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
    sfVertexArray *array = sfVertexArray_create();
    scene_t menu = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music, array};

    for (int i = 0; i < NB_PIXELS; i++)
        add_pixel(menu.array, (sfVector2f){0, 0}, (sfColor){0, 0, 0, 0});
    menu.draw = &draw_menu;
    menu.event = &event_menu;
    menu.anim = &anim_menu;
    return (menu);
}
