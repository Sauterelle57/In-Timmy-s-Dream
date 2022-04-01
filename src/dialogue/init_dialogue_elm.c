/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_game_elm
*/

#include "includes.h"
#include "dialogue.h"

static void fonction(game_t *g)
{
    my_printf("Button clicked !!\n");
}

button_t *init_dialogue_button(sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * 2);

    buttons[0] = create_button(0, (sfVector2f){size.x * 0.21, size.y * 0.42},
    create_text(50, (sfVector2f){100, 100}, "BUTTON"), fonction);
    buttons[1] = create_square_button(0, (sfVector2f){size.x * 0.84, size.y *
    0.66}, create_text(50, (sfVector2f){200, 200}, "BUTTON"), fonction);
    return (buttons);
}

static void action(game_t *g)
{
    my_printf("Go for combat/dialogue/entry !!\n");
}

interest_t *init_dialogue_interest(sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    interest_t *interest = malloc(sizeof(interest_t) * 2);

    interest[0] = create_interest("other/test.png", (sfIntRect)
    {0, 0, 50, 50}, (sfVector2f){size.x * 0.21, size.y * 0.42}, action);
    interest[1] = create_interest("other/test.png", (sfIntRect)
    {0, 0, 50, 50}, (sfVector2f){size.x * 0.16, size.y * 0.70}, action);
    return (interest);
}

body_t *init_dialogue_elem(sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    body_t *elem = malloc(sizeof(body_t) * 2);

    elem[0] = create_body("other/test.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){size.x * 0, size.y * 0});
    elem[1] = create_body("other/test.png", (sfIntRect){0, 0, 50, 50},
    (sfVector2f){size.x * 500, size.x * 600});
    return (elem);
}
