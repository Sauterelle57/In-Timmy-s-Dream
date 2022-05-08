/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_forest
*/

#include "includes.h"
#include "forest.h"

body_t *init_forest_elem_5(body_t *elem)
{
    elem[35] = create_body("other/blue_block.png", (sfIntRect){0, 0, 100, 100},
    (sfVector2f){-150, -350});
    elem[36] = create_body("other/blue_block.png", (sfIntRect){0, 0, 100, 100},
    (sfVector2f){-375, -350});
    return (elem);
}

body_t *init_forest_elem_4(body_t *elem)
{
    elem[26] = create_body("other/green_block.png", (sfIntRect){0, 0, 5, 5},
    (sfVector2f){150, 452});
    elem[27] = create_body("other/green_block.png", (sfIntRect){0, 0, 5, 5},
    (sfVector2f){110, 208});
    elem[28] = create_body("other/green_block.png", (sfIntRect){0, 0, 5, 5},
    (sfVector2f){110, -42});
    elem[29] = create_body("other/green_block.png", (sfIntRect){0, 0, 5, 5},
    (sfVector2f){-513, 452});
    elem[30] = create_body("other/green_block.png", (sfIntRect){0, 0, 5, 5},
    (sfVector2f){-155, 208});
    elem[31] = create_body("other/green_block.png", (sfIntRect){0, 0, 5, 5},
    (sfVector2f){-315, 50});
    elem[32] = create_body("other/green_block.png", (sfIntRect){0, 0, 5, 5},
    (sfVector2f){-435, 180});
    elem[33] = create_body("other/green_block.png", (sfIntRect){0, 0, 5, 5},
    (sfVector2f){-605, 7});
    elem[34] = create_body("other/green_block.png", (sfIntRect){0, 0, 5, 5},
    (sfVector2f){-510, -95});
    elem = init_forest_elem_5(elem);
    return (elem);
}

body_t *init_forest_elem_3(body_t *elem)
{
    elem[17] = create_body("other/block.png", (sfIntRect){0, 0, 40, 15},
    (sfVector2f){-510, -10});
    elem[18] = create_body("other/blue_block.png", (sfIntRect){0, 0, 175, 120},
    (sfVector2f){-565, -235});
    elem[19] = create_body("other/blue_block.png", (sfIntRect){0, 0, 175, 120},
    (sfVector2f){-225, 5});
    elem[20] = create_body("other/blue_block.png", (sfIntRect){0, 0, 175, 120},
    (sfVector2f){-425, 300});
    elem[21] = create_body("other/green_block.png", (sfIntRect){0, 0, 100, 7},
    (sfVector2f){-540, 357});
    elem[22] = create_body("other/green_block.png", (sfIntRect){0, 0, 100, 7},
    (sfVector2f){-650, 357});
    elem[23] = create_body("other/green_block.png", (sfIntRect){0, 0, 100, 7},
    (sfVector2f){-680, -149});
    elem[24] = create_body("other/green_block.png", (sfIntRect){0, 0, 100, 7},
    (sfVector2f){-450, -85});
    elem[25] = create_body("other/green_block.png", (sfIntRect){0, 0, 100, 7},
    (sfVector2f){-325, -43});
    elem = init_forest_elem_4(elem);
    return (elem);
}

body_t *init_forest_elem_2(body_t *elem)
{
    elem[8] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 400},
    (sfVector2f){1070, 250});
    elem[9] = create_body("other/block.png", (sfIntRect){0, 0, 40, 15},
    (sfVector2f){863, 302});
    elem[10] = create_body("other/green_block.png", (sfIntRect){0, 0, 22, 200},
    (sfVector2f){203, 175});
    elem[11] = create_body("other/green_block.png", (sfIntRect){0, 0, 22, 100},
    (sfVector2f){203, 465});
    elem[12] = create_body("other/green_block.png", (sfIntRect){0, 0, 22, 150},
    (sfVector2f){200, -70});
    elem[13] = create_body("other/green_block.png", (sfIntRect){0, 0, 100, 7},
    (sfVector2f){80, 175});
    elem[14] = create_body("other/green_block.png", (sfIntRect){0, 0, 5, 5},
    (sfVector2f){380, 403});
    elem[15] = create_body("other/block.png", (sfIntRect){0, 0, 40, 15},
    (sfVector2f){75, 520});
    elem[16] = create_body("other/block.png", (sfIntRect){0, 0, 40, 15},
    (sfVector2f){-35, -212});
    elem = init_forest_elem_3(elem);
    return (elem);
}

body_t *init_forest_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/swamp.png", (sfIntRect){1010, 600, 2364, 1398},
    (sfVector2f){0, 0});
    elem[1] = create_body("map/swamp3d.png", (sfIntRect){1010, 600, 2364,
    1398}, (sfVector2f){0, 0});
    elem[2] = create_body("other/blue_block.png", (sfIntRect){0, 0, 2500, 290},
    (sfVector2f){-670, 590});
    elem[3] = create_body("other/blue_block.png", (sfIntRect){0, 0, 750, 100},
    (sfVector2f){-670, -460});
    elem[4] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 1000},
    (sfVector2f){-720, -350});
    elem[5] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 300},
    (sfVector2f){50, -360});
    elem[6] = create_body("other/blue_block.png", (sfIntRect){0, 0, 1000, 100},
    (sfVector2f){50, -160});
    elem[7] = create_body("other/blue_block.png", (sfIntRect){0, 0, 800, 300},
    (sfVector2f){420, -35});
    elem = init_forest_elem_2(elem);
    return (elem);
}
