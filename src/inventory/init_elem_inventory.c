/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_inventory
*/

#include "includes.h"
#include "inventory.h"

body_t *init_inventory_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/maze_bg.png", (sfIntRect){0, 0, 1920,
    1080}, (sfVector2f){0, 0});
    for (int i = 1, x = 1000, y = 450; i < 12; i++) {
        elem[i] = create_body(OBJ[i - 1], (sfIntRect){0, 0, 16, 16},
        (sfVector2f){(x += 74), y});
        Set_Scale(elem[i].sprite, 4, 4);
        y += x >= 1280 ? 74 : 0;
        x = x >= 1280 ? 1000 : x;
    }
    return (elem);
}
