/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_button_vampire
*/

#include "includes.h"
#include "menu_lose.h"
#include "interest.h"

button_t *init_lose_button(sfRenderWindow *window, int nb_button)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * nb_button);

    buttons[0] = create_button(9, (sfVector2f){size.x * 0.29, size.y * 0.88},
    create_button_text(50, (sfVector2f){size.x * 0.29 + 190, size.y *
    0.88 + 25}, "FIN."), &go_menu);
    return (buttons);
}
