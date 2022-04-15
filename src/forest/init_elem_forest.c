/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_forest
*/

#include "includes.h"
#include "forest.h"

body_t *init_forest_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/swamp.png", (sfIntRect){1010, 600, 2364,
    1398}, (sfVector2f){0, 0});
    elem[1] = create_body("map/swamp3d.png", (sfIntRect){1010, 600, 2364,
    1398}, (sfVector2f){0, 0});
    return (elem);
}
