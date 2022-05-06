/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_game_elm
*/

#include "includes.h"
#include "combat.h"
#include "interest.h"

static void fonction(game_t *g, int i)
{
    my_printf("Button clicked !!\n");
}

button_t *init_combat_button(sfRenderWindow *window)
{
    button_t *buttons = malloc(sizeof(button_t) * 0);

    return (buttons);
}

interest_t *init_combat_interest(int nb_interest, body_t *elem)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    interest[0] = create_interest("deco/Door_4 (open).png", (sfIntRect)
    {0, 0, 70, 100}, (sfVector2f){215, 60}, &example);
    Set_Scale(interest[0].body.sprite, 1.5, 1.5);
    interest[1] = create_interest("deco/Door_4.png", (sfIntRect)
    {0, 0, 70, 70}, (sfVector2f){1720, 960}, &go_game);
    Set_Scale(interest[1].body.sprite, 1.5, -1.5);
    sfSprite_setRotation(interest[1].body.sprite, -90.0);
    interest[2] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 50, 200}, (sfVector2f){1600, 860}, &go_game);
    spawn_enemy(nb_interest, elem, interest);
    return (interest);
}

interest_t *spawn_enemy(int nb_interest, body_t *elem, interest_t *interest)
{
    for (int i = 3; i < nb_interest; i++) {
        int k = (rand() % 167) + 2;
        int a = rand() % 4;
        //my_printf("N : %d & %d\n", k, a);
        interest[i] = create_interest(CHOICE[a], (sfIntRect)
        {0, 0, 48, 70}, (sfVector2f){elem[k].pos.x + 8,
        elem[k].pos.y - 20}, &example);
    }
    return (interest);
}
