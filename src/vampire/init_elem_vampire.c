/*
** EPITECH PROJECT, 3033
** RPG
** File description:
** inti_elem_vampire
*/

#include "includes.h"
#include "vampire.h"

body_t *init_vampire_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/interiors_vamp.png", (sfIntRect){1196, 1330,
    4950, 3170}, (sfVector2f){0, 0});
    elem[1] = create_body("map/interiors_vamp.png", (sfIntRect){1196, 1330,
    4950, 3170}, (sfVector2f){0, 0});
    elem[2] = create_body("other/block.png", (sfIntRect){0, 0, 60, 800},
    (sfVector2f){1310, -60});
    elem[3] = create_body("other/block.png", (sfIntRect){0, 0, 380, 300},
    (sfVector2f){570, 10});
    elem[4] = create_body("other/block.png", (sfIntRect){0, 0, 380, 400},
    (sfVector2f){570, 570});
    elem[5] = create_body("other/block.png", (sfIntRect){0, 0, 1000, 60},
    (sfVector2f){-105, 670});
    elem[6] = create_body("other/block.png", (sfIntRect){0, 0, 300, 60},
    (sfVector2f){1030, 670});
    elem[7] = create_body("other/block.png", (sfIntRect){0, 0, 300, 60},
    (sfVector2f){000, 700});
    elem[8] = create_body("other/block.png", (sfIntRect){0, 0, 300, 190},
    (sfVector2f){1030, -80});
    elem[9] = create_body("other/block.png", (sfIntRect){0, 0, 160, 60},
    (sfVector2f){1080, 00});
    elem[10] = create_body("other/block.png", (sfIntRect){0, 0, 340, 190},
    (sfVector2f){830, -80});
    elem[11] = create_body("other/block.png", (sfIntRect){0, 0, 60, 1000},
    (sfVector2f){1350, -1000});
    elem[12] = create_body("other/block.png", (sfIntRect){0, 0, 300, 106},
    (sfVector2f){1030, -790});
    elem[13] = create_body("other/block.png", (sfIntRect){0, 0, 340, 190},
    (sfVector2f){830, -790});
    elem[14] = create_body("other/block.png", (sfIntRect){0, 0, 900, 60},
    (sfVector2f){800, -040});
    elem[15] = create_body("other/block.png", (sfIntRect){0, 0, 566, 60},
    (sfVector2f){800, -000});
    elem[16] = create_body("other/block.png", (sfIntRect){0, 0, 300, 100},
    (sfVector2f){790, -806});
    elem[17] = create_body("other/block.png", (sfIntRect){0, 0, 70, 70},
    (sfVector2f){1100, -840});
    elem[18] = create_body("other/block.png", (sfIntRect){0, 0, 60, 900},
    (sfVector2f){816, -000});
    elem[19] = create_body("other/block.png", (sfIntRect){0, 0, 60, 900},
    (sfVector2f){570, -000});
    elem[20] = create_body("other/block.png", (sfIntRect){0, 0, 60, 1600},
    (sfVector2f){-86, -000});
    elem[21] = create_body("other/block.png", (sfIntRect){0, 0, 660, 60},
    (sfVector2f){-86, -586});
    elem[22] = create_body("other/block.png", (sfIntRect){0, 0, 170, 100},
    (sfVector2f){040, -450});
    elem[23] = create_body("other/block.png", (sfIntRect){0, 0, 140, 60},
    (sfVector2f){860, -136});
    elem[24] = create_body("other/block.png", (sfIntRect){0, 0, 70, 60},
    (sfVector2f){860, -196});
    elem[25] = create_body("other/block.png", (sfIntRect){0, 0, 300, 350},
    (sfVector2f){-40, -130});
    elem[26] = create_body("other/block.png", (sfIntRect){0, 0, 300, 350},
    (sfVector2f){346, -130});
    elem[27] = create_body("other/block.png", (sfIntRect){0, 0, 190, 440},
    (sfVector2f){-40, -130});
    elem[28] = create_body("other/block.png", (sfIntRect){0, 0, 60, 60},
    (sfVector2f){60, 300});
    elem[29] = create_body("other/block.png", (sfIntRect){0, 0, 60, 60},
    (sfVector2f){80, 490});
    elem[30] = create_body("other/block.png", (sfIntRect){0, 0, 60, 60},
    (sfVector2f){186, 580});
    elem[31] = create_body("other/green_block.png", (sfIntRect){0, 0, 180, 100},
    (sfVector2f){-10, 550});
    elem[32] = create_body("other/block.png", (sfIntRect){0, 0, 110, 100},
    (sfVector2f){50, -500});
    elem[33] = create_body("other/block.png", (sfIntRect){0, 0, 60, 100},
    (sfVector2f){300, -550});
    return (elem);
}
