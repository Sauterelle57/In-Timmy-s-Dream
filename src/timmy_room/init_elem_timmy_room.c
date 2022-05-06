/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_timmy_room
*/

#include "includes.h"
#include "timmy_room.h"

body_t *init_timmy_room_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/Timmys_room.png", (sfIntRect){0, 0,
    1920, 1080}, (sfVector2f){0, 0});
    elem[1] = create_body("other/blank.png", (sfIntRect){0, 0,
    1920, 1080}, (sfVector2f){0, 0});
    elem[2] = create_body("other/block.png", (sfIntRect){0, 0,
    800, 10}, (sfVector2f){600, 430});
    elem[3] = create_body("other/block.png", (sfIntRect){0, 0,
    10, 350}, (sfVector2f){600, 430});
    elem[4] = create_body("other/block.png", (sfIntRect){0, 0,
    10, 350}, (sfVector2f){1347, 430});
    elem[5] = create_body("other/block.png", (sfIntRect){0, 0,
    100, 10}, (sfVector2f){680, 765});
    elem[6] = create_body("other/block.png", (sfIntRect){0, 0,
    60, 10}, (sfVector2f){613, 730});
    elem[7] = create_body("other/block.png", (sfIntRect){0, 0,
    550, 10}, (sfVector2f){787, 730});
    elem[8] = create_body("other/block.png", (sfIntRect){0, 0,
    54, 50}, (sfVector2f){932, 450});
    elem[9] = create_body("other/block.png", (sfIntRect){0, 0,
    115, 80}, (sfVector2f){1197, 445});
    elem[10] = create_body("other/block.png", (sfIntRect){0, 0,
    37, 25}, (sfVector2f){1233, 530});
    elem[11] = create_body("other/block.png", (sfIntRect){0, 0,
    162, 150}, (sfVector2f){829, 610});
    return (elem);
}
