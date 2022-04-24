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
    int i = 0;
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[i++] = create_body("map/interiors_vamp.png", (sfIntRect){1185, 1220,
    4950, 3170}, (sfVector2f){0, 0});
    elem[i++] = create_body("map/interiors_vamp.png", (sfIntRect){1185, 1220,
    3840, 2160}, (sfVector2f){0, 0});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 50, 700},
    (sfVector2f){1210, -50});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 270, 290},
    (sfVector2f){460, 10});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 270, 300},
    (sfVector2f){460, 460});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 1000, 50},
    (sfVector2f){-104, 560});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 200, 50},
    (sfVector2f){1020, 560});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 200, 50},
    (sfVector2f){900, 600});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 200, 180},
    (sfVector2f){1020, -70});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 150, 50},
    (sfVector2f){1070, 90});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 230, 180},
    (sfVector2f){720, -70});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1000},
    (sfVector2f){1240, -1000});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 200, 195},
    (sfVector2f){1020, -680});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 230, 180},
    (sfVector2f){720, -680});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 800, 50},
    (sfVector2f){700, -930});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 455, 50},
    (sfVector2f){700, -900});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 200, 100},
    (sfVector2f){680, -795});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 60, 60},
    (sfVector2f){1190, -730});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 50, 800},
    (sfVector2f){715, -900});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 50, 800},
    (sfVector2f){460, -900});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 50, 1500},
    (sfVector2f){-75, -900});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 550, 50},
    (sfVector2f){-75, -475});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 160, 100},
    (sfVector2f){930, -340});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 130, 50},
    (sfVector2f){750, -125});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 60, 50},
    (sfVector2f){750, -185});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 200, 240},
    (sfVector2f){-30, -120});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 200, 240},
    (sfVector2f){235, -120});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 180, 330},
    (sfVector2f){-30, -120});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 50, 50},
    (sfVector2f){50, 200});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 50, 50},
    (sfVector2f){70, 380});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 50, 50},
    (sfVector2f){175, 470});
    elem[i++] = create_body("other/green_block.png", (sfIntRect){0, 0, 170,
    100}, (sfVector2f){-10, 440});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 110, 100},
    (sfVector2f){40, -490});
    elem[i++] = create_body("other/block.png", (sfIntRect){0, 0, 50, 100},
    (sfVector2f){200, -440});
    return (elem);
}
