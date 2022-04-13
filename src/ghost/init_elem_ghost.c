/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_ghost
*/

#include "includes.h"
#include "ghost.h"

body_t *init_ghost_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/maisonent.png", (sfIntRect){980, 1350, 3840,
    2160}, (sfVector2f){0, 0});
    return (elem);
}
