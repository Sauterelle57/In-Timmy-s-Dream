/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_vampire
*/

#include "includes.h"
#include "menu_lose.h"

body_t *init_lose_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/cher_journal.png", (sfIntRect){0, 0,
    1920, 1080}, (sfVector2f){0, 0});
    return (elem);
}
