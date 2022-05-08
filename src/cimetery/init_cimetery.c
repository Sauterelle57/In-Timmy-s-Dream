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
    button_t *buttons = init_cimetery_button(g->window, 2);
    int nb_elem = 40;
    body_t *elem = init_cimetery_elem(g->window, nb_elem);
    int nb_interest = 11;
    interest_t *interest = init_cimetery_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile(g->troll == 1 ? "music/\
    Everlasting.ogg" : "music/rickroll.ogg");
    sfVertexArray *array = sfVertexArray_create();
    scene_t cimetery = {0, buttons, 2, elem, nb_elem, interest,
    nb_interest, scene_music, array};

    for (int i = 0; i < NB_PARTICULES; i++)
        add_pixel(cimetery.array, (sfVector2f){rand() % 1920, rand() %
        1080}, (sfColor){70, 45, 41, 255});
    cimetery.draw = &draw_cimetery;
    cimetery.event = &event_cimetery;
    cimetery.anim = &anim_cimetery;
    sfMusic_setLoop(cimetery.scene_music, sfTrue);
    sfMusic_setVolume(cimetery.scene_music, g->params[VOL]);
    return (cimetery);
}
