/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_menu
*/

#include "includes.h"
#include "main_menu.h"
#include "settings.h"

void go_settings(game_t *g, int i)
{
    g->previous_scene = g->curent_scene;
    sfMusic_pause(g->scene[g->previous_scene].scene_music);
    if (g->scene[9].charged == 1)
        sfMusic_play(g->scene[9].scene_music);
    charge_scene(g, 9);
    g->curent_scene = 9;
}

scene_t init_settings(game_t *g)
{
    int nb_button = 6;
    button_t *buttons = init_settings_button(g->window, nb_button);
    int nb_elem = 9;
    body_t *elem = init_settings_elem(g->window, nb_elem);
    int nb_interest = 0;
    interest_t *interest = init_settings_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile("music/The_Abyss.ogg");
    sfVertexArray *array = sfVertexArray_create();
    scene_t setting = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music, array};

    for (int i = 0; i < NB_PIXELS; i++)
        add_pixel(setting.array, (sfVector2f){0, 0}, (sfColor){0, 0, 0, 0});
    setting.draw = &draw_settings;
    setting.event = &event_settings;
    setting.anim = &anim_settings;
    return (setting);
}
