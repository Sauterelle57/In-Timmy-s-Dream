/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_block_3
*/

#include "includes.h"
#include "game.h"

body_t *create_block_11(body_t *elem)
{
    elem[92] = create_body("other/block.png", (sfIntRect){0, 0, 25, 2},
    (sfVector2f){7252, 805});
    elem[93] = create_body("other/block.png", (sfIntRect){0, 0, 25, 2},
    (sfVector2f){7230, 580});
    elem[94] = create_body("other/block.png", (sfIntRect){0, 0, 25, 2},
    (sfVector2f){7180, 430});
    elem[95] = create_body("other/block.png", (sfIntRect){0, 0, 50, 20},
    (sfVector2f){3820, 830});
    elem[96] = create_body("other/block.png", (sfIntRect){0, 0, 50, 20},
    (sfVector2f){3910, 710});
    elem[97] = create_body("other/block.png", (sfIntRect){0, 0, 50, 20},
    (sfVector2f){4160, 700});
    elem[98] = create_body("other/block.png", (sfIntRect){0, 0, 50, 20},
    (sfVector2f){4113, 830});
    elem[99] = create_body("other/block.png", (sfIntRect){0, 0, 50, 20},
    (sfVector2f){4265, 780});
    return (elem);
}

