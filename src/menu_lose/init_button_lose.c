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

    buttons[0] = create_button(9, (sfVector2f){size.x * 0.15, size.y * 0.50},
    create_button_text(50, (sfVector2f){size.x * 0.15 + 80, size.y *
    0.50 + 20}, "MAIN MENU"), &go_menu);
    buttons[1] = create_button(9, (sfVector2f){size.x * 0.60, size.y *
    0.50}, create_button_text(50, (sfVector2f){size.x * 0.60 + 180, size.y *
    0.50 + 20}, "QUIT"), &quit_game);
    return (buttons);
}
