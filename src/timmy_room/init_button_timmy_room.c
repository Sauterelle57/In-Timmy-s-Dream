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

    buttons[0] = create_square_button(0, (sfVector2f){size.x * 0.95, size.y *
    0.03}, create_button_text(50, (sfVector2f){100, 100}, ""), &go_pause);
    buttons[1] = create_square_button(3, (sfVector2f){size.x * 0.95, size.y *
    0.12}, create_button_text(50, (sfVector2f){100, 100}, ""), &go_inventory);
    return (buttons);
}
