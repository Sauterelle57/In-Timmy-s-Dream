/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_vampire
*/

#include "includes.h"
#include "vampire.h"

body_t *init_vampire_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/interiors_vamp.png", (sfIntRect){1185, 1220,
    3840, 2160}, (sfVector2f){0, 0});
    elem[1] = create_body("other/block.png", (sfIntRect){0, 0, 50, 700},
    (sfVector2f){1210, -50});
    elem[2] = create_body("other/block.png", (sfIntRect){0, 0, 270, 290},
    (sfVector2f){460, 10});
    elem[3] = create_body("other/block.png", (sfIntRect){0, 0, 270, 300},
    (sfVector2f){460, 460});
    elem[4] = create_body("other/block.png", (sfIntRect){0, 0, 1000, 50},
    (sfVector2f){-104, 560});
    elem[5] = create_body("other/block.png", (sfIntRect){0, 0, 200, 50},
    (sfVector2f){1020, 560});
    elem[6] = create_body("other/block.png", (sfIntRect){0, 0, 200, 50},
    (sfVector2f){900, 600});
    elem[7] = create_body("other/blue_block.png", (sfIntRect){0, 0, 200, 180},
    (sfVector2f){1020, -70});
    elem[8] = create_body("other/block.png", (sfIntRect){0, 0, 150, 50},
    (sfVector2f){1070, 90});
    elem[9] = create_body("other/block.png", (sfIntRect){0, 0, 230, 180},
    (sfVector2f){720, -70});
    elem[10] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1000},
    (sfVector2f){1240, -1000});
    elem[11] = create_body("other/blue_block.png", (sfIntRect){0, 0, 200, 180},
    (sfVector2f){1020, -680});
    elem[12] = create_body("other/block.png", (sfIntRect){0, 0, 230, 180},
    (sfVector2f){720, -680});
    elem[13] = create_body("other/block.png", (sfIntRect){0, 0, 800, 50},
    (sfVector2f){700, -930});
    elem[14] = create_body("other/block.png", (sfIntRect){0, 0, 455, 50},
    (sfVector2f){700, -900});
    elem[15] = create_body("other/block.png", (sfIntRect){0, 0, 200, 100},
    (sfVector2f){680, -795});
    elem[16] = create_body("other/blue_block.png", (sfIntRect){0, 0, 60, 60},
    (sfVector2f){1190, -730});
    elem[17] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 800},
    (sfVector2f){715, -900});
    elem[18] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 800},
    (sfVector2f){460, -900});
    elem[19] = create_body("other/blue_block.png", (sfIntRect){0, 0, 50, 1500},
    (sfVector2f){-75, -900});
    return (elem);
}
