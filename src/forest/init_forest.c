/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_forest
*/

#include "includes.h"
#include "forest.h"

scene_t init_forest(game_t *g)
{
    char *music = g->troll == 1 ? "music/The_Calm.ogg" : "music/rickroll.ogg";
    button_t *buttons = init_forest_button(g->window, 2);
    int nb_elem = 37;
    body_t *elem = init_forest_elem(g->window, nb_elem);
    int nb_interest = 5;
    interest_t *interest = init_forest_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile(music);
    sfVertexArray *array = sfVertexArray_create();
    scene_t forest = {0, buttons, 2, elem, nb_elem, interest,
    nb_interest, scene_music, array};

    for (int i = 0; i < 50000; i++)
        add_pixel(forest.array, (sfVector2f){rand() % 1920, rand() %
        1080}, (sfColor){153, 255, 0, 255});
    forest.draw = &draw_forest;
    forest.event = &event_forest;
    forest.anim = &anim_forest;
    sfMusic_setLoop(forest.scene_music, sfTrue);
    sfMusic_setVolume(forest.scene_music, g->params[VOL]);
    return (forest);
}
