/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_game_elm
*/

#include "includes.h"
#include "game.h"
#include "interest.h"

void fonction(game_t *g)
{
    my_printf("Button clicked !!\n");
}

button_t *init_game_button(sfRenderWindow *window, int nb_button)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * nb_button);

    buttons[0] = create_square_button(0, (sfVector2f){size.x * 0.95, size.y *
    0.03}, create_text(50, (sfVector2f){100, 100}, ""), &fonction);
    buttons[1] = create_square_button(3, (sfVector2f){size.x * 0.95, size.y *
    0.12}, create_text(50, (sfVector2f){100, 100}, ""), &go_inventory);
    return (buttons);
}

interest_t *init_game_interest(sfRenderWindow *window, int nb_interest)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    interest = create_all_interests(interest);
    return (interest);
}

body_t *init_game_elem(sfRenderWindow *window, int nb_elem)
{
    body_t *elem = malloc(sizeof(body_t) * nb_elem);

    elem[0] = create_body("map/main.png", (sfIntRect){220, 2940, 1920, 1080},
    (sfVector2f){0, 0});
    elem[1] = create_body("map/3dmap.png", (sfIntRect){-600, 2940, 1920, 1080},
    (sfVector2f){0, 0});
    elem = create_block(elem);
    return (elem);
}
