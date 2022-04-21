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
    elem[2] = create_body("other/blue_block.png", (sfIntRect){0, 0, 2500, 290},
    (sfVector2f){-670, 590});
    elem[3] = create_body("other/blue_block.png", (sfIntRect){0, 0, 420, 100},
    (sfVector2f){-670, -350});
    elem[4] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 1000},
    (sfVector2f){-720, -350});
    elem[5] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 300},
    (sfVector2f){50, -350});
    elem[6] = create_body("other/blue_block.png", (sfIntRect){0, 0, 420, 100},
    (sfVector2f){-670, -350});
    elem[7] = create_body("other/blue_block.png", (sfIntRect){0, 0, 420, 100},
    (sfVector2f){-670, -350});
    return (elem);
}
