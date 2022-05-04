/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_forest
*/

#include "includes.h"
#include "forest.h"
void add_pixel(sfVertexArray *pixels, sfVector2f pos, sfColor color);

scene_t init_forest(game_t *g)
{
    int nb_button = 2;
    button_t *buttons = init_forest_button(g->window, nb_button);
    int nb_elem = 37;
    body_t *elem = init_forest_elem(g->window, nb_elem);
    int nb_interest = 5;
    interest_t *interest = init_forest_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile("music/The_Calm.ogg");
    sfVertexArray *array = sfVertexArray_create();
    scene_t forest = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music, array};

    for (int i = 0; i < 50000; i++)
        add_pixel(forest.array, (sfVector2f){rand() % 1920, rand() %
        1080}, (sfColor){153, 255, 0, 255});
    forest.draw = &draw_forest;
    forest.event = &event_forest;
    forest.anim = &anim_forest;
    sfMusic_setLoop(forest.scene_music, sfTrue);
    sfMusic_setVolume(forest.scene_music, 100);
    return (forest);
}
