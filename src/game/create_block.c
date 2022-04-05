/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_block
*/

#include "includes.h"
#include "game.h"

body_t *create_block(body_t *elem)
{
    elem[1] = create_body("other/block.png", (sfIntRect){0, 0, 1025, 300},
    (sfVector2f){600, 180});
    elem[2] = create_body("other/block.png", (sfIntRect){0, 0, 1300, 300},
    (sfVector2f){600, 666});
    return (elem);
}
