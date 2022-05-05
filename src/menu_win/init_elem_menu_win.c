/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inti_elem_win
*/

#include "includes.h"
#include "menu_win.h"

body_t *init_win_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("other/floor.png", (sfIntRect){0, 0,
    1920, 1080}, (sfVector2f){0, 0});
    return (elem);
}
