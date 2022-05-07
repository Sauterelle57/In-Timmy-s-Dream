/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_menu
*/

#include "includes.h"
#include "main_menu.h"
#include "settings.h"

scene_t init_settings(game_t *g)
{
    int nb_button = 6;
    button_t *buttons = init_settings_button(g->window, nb_button);
    int nb_elem = 11;
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
    sfMusic_setLoop(setting.scene_music, sfTrue);
    sfMusic_setVolume(setting.scene_music, g->params[VOL]);
    return (setting);
}
