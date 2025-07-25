/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_interest_vampire
*/

#include "includes.h"
#include "vampire.h"
#include "interest.h"

interest_t *init_vampire_interest(sfRenderWindow *window, int nb_interest)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    interest[0] = create_interest(VAMPIRE[0], (sfIntRect)
    {0, 0, 48, 70}, (sfVector2f){820, 120}, &check_dialogue);
    interest[0].line = 4;
    Set_Scale(interest[0].body.sprite, 1.5, 1.5);
    interest[1] = create_interest(BAT[(rand() % 3) * 3], (sfIntRect){0, 0, 48,
    48}, (sfVector2f){770, -300}, &go_combat);
    interest[2] = create_interest(BAT[(rand() % 3) * 3], (sfIntRect){0, 0, 48,
    48}, (sfVector2f){1100, -800}, &go_combat);
    interest[3] = create_interest(BAT[(rand() % 3) * 3], (sfIntRect){0, 0, 48,
    48}, (sfVector2f){320, 150}, &go_combat);
    interest[4] = create_interest("other/blank.png", (sfIntRect){0, 0, 120,
    40}, (sfVector2f){900, 560}, &go_game);
    return (interest);
}
