/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_button_timmy_room
*/

#include "includes.h"
#include "timmy_room.h"
#include "interest.h"

button_t *init_timmy_room_button(sfRenderWindow *window, int nb_button)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * nb_button);

    return (buttons);
}
