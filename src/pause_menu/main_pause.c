/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_pause_menu
*/

#include "includes.h"
#include "pause_menu.h"

void go_pause_menu(game_t *g, int i)
{
    g->previous_scene = g->curent_scene;
    sfMusic_pause(g->scene[g->previous_scene].scene_music);
    if (g->scene[PAUSE].charged == 1)
        sfMusic_play(g->scene[PAUSE].scene_music);
    charge_scene(g, 1);
    g->curent_scene = 1;
}

scene_t init_pause_menu(game_t *g)
{
    int nb_button = 3;
    button_t *buttons = init_pause_menu_button(g->window, nb_button);
    int nb_elem = 9;
    body_t *elem = init_pause_menu_elem(g->window, nb_elem);
    int nb_interest = 0;
    interest_t *interest = init_pause_menu_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile("music/The_Abyss.ogg");
    sfVertexArray *array = sfVertexArray_create();
    scene_t pause_menu = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music, array};

    for (int i = 0; i < NB_PIXELS; i++)
        add_pixel(pause_menu.array, (sfVector2f){0, 0}, (sfColor){0, 0, 0, 0});
    pause_menu.draw = &draw_pause_menu;
    pause_menu.event = &event_pause_menu;
    pause_menu.anim = &anim_pause_menu;
    sfMusic_setLoop(pause_menu.scene_music, sfTrue);
    sfMusic_setVolume(pause_menu.scene_music, g->params[VOL]);
    return (pause_menu);
}
