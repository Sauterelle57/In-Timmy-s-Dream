/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_loading_elm
*/

#include "includes.h"
#include "my_loading.h"

button_t *init_loading_button(sfRenderWindow *window, int nb_button)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * nb_button);

    return (buttons);
}

interest_t *init_loading_interest(sfRenderWindow *window, int nb_interest)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    return (interest);
}

body_t *init_loading_elem(sfRenderWindow *window, int nb_elem)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("other/E-game.png", (sfIntRect)
    {0, 0, 1920, 1080}, (sfVector2f){0, 0});
    return (elem);
}
