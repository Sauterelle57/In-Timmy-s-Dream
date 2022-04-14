/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_button_inventory
*/

#include "includes.h"
#include "inventory.h"
#include "interest.h"

button_t *init_inventory_button(sfRenderWindow *window, int nb_button)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * nb_button);

    buttons[0] = create_square_button(6, (sfVector2f){size.x * 0.95, size.y *
    0.03}, create_text(50, (sfVector2f){100, 100}, ""), &go_back);
    return (buttons);
}
