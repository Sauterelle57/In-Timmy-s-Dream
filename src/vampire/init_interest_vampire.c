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

    interest[0] = create_interest(VAMPIRE[0], (sfIntRect) //vampire
    {0, 0, 48, 70}, (sfVector2f){820, 120}, &example);
    interest[1] = create_interest(BAT[0], (sfIntRect){0, 0, 48, 48}, //chauve souris
    (sfVector2f){770, -300}, &go_combat);
    interest[2] = create_interest(BAT[0], (sfIntRect){0, 0, 48, 48}, //chauve souris
    (sfVector2f){1100, -800}, &go_combat);
    interest[3] = create_interest(BAT[0], (sfIntRect){0, 0, 48, 48}, //chauve souris
    (sfVector2f){320, 150}, &go_combat);
    return (interest);
}
