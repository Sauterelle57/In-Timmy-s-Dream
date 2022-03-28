/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_attribus
*/

#include "includes.h"

sfRenderWindow *create_window(int x, int y)
{
    sfVideoMode v_mode = {x, y, 32};
    sfRenderWindow *window = sfRenderWindow_create(v_mode, "our_RPG",
    sfClose | sfResize, NULL);

    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}

timing_t create_timer(void)
{
    sfClock *clock = sfClock_create();
    timing_t t = {clock, 0.0, 0.0};

    return (t);
}

object_t create_object(char *text, int pv, int pa, int type)
{
    object_t obj = {create_body(text, (sfIntRect){0, 0, 35, 10},
    (sfVector2f){400, 200}), 0, pv, pa, type};

    return (obj);
}

button_t create_button(char *texture, sfVector2f pos, sfText *text,
void (*fonction)(game_t *))
{
    button_t button = {create_body(texture, (sfIntRect){0, 0, 35, 10}, pos),
    (sfVector2f){400, 200}, text, fonction};

    sfSprite_setScale(button.body.sprite, (sfVector2f){10, 10});
    return (button);
}

button_t create_square_button(char *texture, sfVector2f pos, sfText *text,
void (*fonction)(game_t *))
{
    button_t button = {create_body(texture, (sfIntRect){0, 0, 16, 16}, pos),
    (sfVector2f){100, 100}, text, fonction};

    sfSprite_setScale(button.body.sprite, (sfVector2f){7, 7});
    return (button);
}
