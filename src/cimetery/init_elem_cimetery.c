/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_cimetery
*/

#include "includes.h"
#include "cimetery.h"

body_t *init_cimetery_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/cimetery.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    elem[1] = create_body("map/cimetery.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    return (elem);
}
