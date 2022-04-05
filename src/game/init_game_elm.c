/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_game_elm
*/

#include "includes.h"
#include "game.h"

void fonction(game_t *g)
{
    my_printf("Button clicked !!\n");
}

void go_combat(game_t *g)
{
    g->player.body.pos.x = 260;
    g->player.body.pos.y = 140;
    Set_Pos(g->player.body.sprite, 260, 140);
    g->curent_scene = 2;
}

button_t *init_game_button(sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * 1);

    buttons[0] = create_square_button(0, (sfVector2f){size.x * 0.95, size.y *
    0.03}, create_text(50, (sfVector2f){100, 100}, ""), &fonction);
    return (buttons);
}

void action(game_t *g)
{
    my_printf("Go for combat/dialogue/entry !!\n");
}

interest_t *init_game_interest(sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    interest_t *interest = malloc(sizeof(interest_t) * 2);

    interest[0] = create_interest(BAT[0], (sfIntRect)
    {0, 0, 32, 32}, (sfVector2f){size.x * 0.45, size.y * 0.42}, &go_combat);
    interest[1] = create_interest(VAMPIRE[0], (sfIntRect)
    {0, 0, 32, 50}, (sfVector2f){size.x * 0.16, size.y * 0.70}, &action);
    return (interest);
}

body_t *init_game_elem(sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    body_t *elem = malloc(sizeof(body_t) * 3);

    elem[0] = create_body("map/main.png", (sfIntRect){-600, 2940, 1920, 1080},
    (sfVector2f){0, 0});
    elem = create_block(elem);
    return (elem);
}
