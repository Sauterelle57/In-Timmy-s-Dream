/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_htp
*/

#include "includes.h"
#include "how_to_play.h"

scene_t init_htp(game_t *g)
{
    int nb_button = 2;
    button_t *buttons = init_htp_button(g->window, nb_button);
    int nb_elem = 16;
    body_t *elem = init_htp_elem(g->window, nb_elem);
    int nb_interest = 4;
    interest_t *interest = init_htp_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile("music/The_Abyss.ogg");
    sfVertexArray *array = sfVertexArray_create();
    scene_t htp = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music, array};

    for (int i = 0; i < NB_PIXELS; i++)
        add_pixel(htp.array, (sfVector2f){0, 0}, (sfColor){0, 0, 0, 0});
    htp.draw = &draw_htp;
    htp.event = &event_htp;
    htp.anim = &anim_htp;
    sfMusic_setLoop(htp.scene_music, sfTrue);
    sfMusic_setVolume(htp.scene_music, g->params[VOL]);
    return (htp);
}
