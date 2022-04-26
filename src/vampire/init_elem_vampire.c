/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_vampire
*/

#include "includes.h"
#include "vampire.h"

static body_t *init_vampire_elem_4(body_t *elem)
{
    elem[26] = create_body("other/block.png", (sfIntRect){0, 0, 200, 240},
    (sfVector2f){235, -120});
    elem[27] = create_body("other/block.png", (sfIntRect){0, 0, 180, 330},
    (sfVector2f){-30, -120});
    elem[28] = create_body("other/block.png", (sfIntRect){0, 0, 50, 50},
    (sfVector2f){50, 200});
    elem[29] = create_body("other/block.png", (sfIntRect){0, 0, 50, 50},
    (sfVector2f){70, 380});
    elem[30] = create_body("other/block.png", (sfIntRect){0, 0, 50, 50},
    (sfVector2f){175, 470});
    elem[31] = create_body("other/block.png", (sfIntRect){0, 0, 170,
    100}, (sfVector2f){-10, 440});
    elem[32] = create_body("other/block.png", (sfIntRect){0, 0, 110, 100},
    (sfVector2f){40, -490});
    elem[33] = create_body("other/block.png", (sfIntRect){0, 0, 50, 100},
    (sfVector2f){200, -440});
    return (elem);
}

static body_t *init_vampire_elem_3(body_t *elem)
{
    elem[17] = create_body("other/block.png", (sfIntRect){0, 0, 60, 60},
    (sfVector2f){1190, -730});
    elem[18] = create_body("other/block.png", (sfIntRect){0, 0, 50, 800},
    (sfVector2f){715, -900});
    elem[19] = create_body("other/block.png", (sfIntRect){0, 0, 50, 800},
    (sfVector2f){460, -900});
    elem[20] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1500},
    (sfVector2f){-75, -900});
    elem[21] = create_body("other/block.png", (sfIntRect){0, 0, 550, 50},
    (sfVector2f){-75, -475});
    elem[22] = create_body("other/block.png", (sfIntRect){0, 0, 160, 100},
    (sfVector2f){930, -340});
    elem[23] = create_body("other/block.png", (sfIntRect){0, 0, 130, 50},
    (sfVector2f){750, -125});
    elem[24] = create_body("other/block.png", (sfIntRect){0, 0, 60, 50},
    (sfVector2f){750, -185});
    elem[25] = create_body("other/block.png", (sfIntRect){0, 0, 200, 240},
    (sfVector2f){-30, -120});
    elem = init_vampire_elem_4(elem);
    return (elem);
}

static body_t *init_vampire_elem_2(body_t *elem)
{
    elem[8] = create_body("other/block.png", (sfIntRect){0, 0, 200, 180},
    (sfVector2f){1020, -70});
    elem[9] = create_body("other/block.png", (sfIntRect){0, 0, 150, 50},
    (sfVector2f){1070, 90});
    elem[10] = create_body("other/block.png", (sfIntRect){0, 0, 230, 180},
    (sfVector2f){720, -70});
    elem[11] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1000},
    (sfVector2f){1240, -1000});
    elem[12] = create_body("other/block.png", (sfIntRect){0, 0, 200, 195},
    (sfVector2f){1020, -680});
    elem[13] = create_body("other/block.png", (sfIntRect){0, 0, 230, 180},
    (sfVector2f){720, -680});
    elem[14] = create_body("other/block.png", (sfIntRect){0, 0, 800, 50},
    (sfVector2f){700, -930});
    elem[15] = create_body("other/block.png", (sfIntRect){0, 0, 455, 50},
    (sfVector2f){700, -900});
    elem[16] = create_body("other/block.png", (sfIntRect){0, 0, 200, 100},
    (sfVector2f){680, -795});
    elem = init_vampire_elem_3(elem);
    return (elem);
}

body_t *init_vampire_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/interiors_vamp.png", (sfIntRect){1185, 1220,
    4950, 3170}, (sfVector2f){0, 0});
    elem[1] = create_body("other/blank.png", (sfIntRect){1185, 1220,
    3840, 2160}, (sfVector2f){0, 0});
    elem[2] = create_body("other/block.png", (sfIntRect){0, 0, 50, 700},
    (sfVector2f){1210, -50});
    elem[3] = create_body("other/block.png", (sfIntRect){0, 0, 270, 290},
    (sfVector2f){460, 10});
    elem[4] = create_body("other/block.png", (sfIntRect){0, 0, 270, 300},
    (sfVector2f){460, 460});
    elem[5] = create_body("other/block.png", (sfIntRect){0, 0, 1000, 50},
    (sfVector2f){-104, 560});
    elem[6] = create_body("other/block.png", (sfIntRect){0, 0, 200, 50},
    (sfVector2f){1020, 560});
    elem[7] = create_body("other/block.png", (sfIntRect){0, 0, 200, 50},
    (sfVector2f){900, 600});
    elem = init_vampire_elem_2(elem);
    return (elem);
}
