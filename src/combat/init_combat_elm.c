/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_game_elm
*/

#include "includes.h"
#include "combat.h"

static void fonction(game_t *g)
{
    my_printf("Button clicked !!\n");
}

button_t *init_combat_button(sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    button_t *buttons = malloc(sizeof(button_t) * 0);

    //buttons[0] = create_button(0, (sfVector2f){size.x * 0.21, size.y * 0.42},
    //create_text(50, (sfVector2f){100, 100}, "BUTTON"), fonction);
    //buttons[1] = create_square_button(0, (sfVector2f){size.x * 0.84, size.y *
    //0.66}, create_text(50, (sfVector2f){200, 200}, "BUTTON"), fonction);
    return (buttons);
}

static void action(game_t *g)
{
    my_printf("Go for combat/combat !!\n");
}

interest_t *init_combat_interest(int nb_interest, body_t *elem)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    interest[0] = create_interest("deco/Door_4 (open).png", (sfIntRect)
    {0, 0, 70, 70}, (sfVector2f){215, 60}, action);
    Set_Scale(interest[0].body.sprite, 1.5, 1.5);
    interest[1] = create_interest("deco/Door_4.png", (sfIntRect)
    {0, 0, 70, 70}, (sfVector2f){1700, 600}, action);
    Set_Scale(interest[1].body.sprite, 1.5, -1.5);
    int k = rand() % 190;
    interest[2] = create_interest(CLOWN[1], (sfIntRect)
    {0, 0, 48, 70}, (sfVector2f){elem[k].pos.x,
    elem[k].pos.y}, action);
    //interest[1] = create_interest("other/test.png", (sfIntRect)
    //{0, 0, 50, 50}, (sfVector2f){size.x * 0.16, size.y * 0.70}, action);
    return (interest);
}
