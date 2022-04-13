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
    return (elem);
}
