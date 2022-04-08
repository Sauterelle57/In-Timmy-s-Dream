/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_interest
*/

#include "includes.h"
#include "game.h"

interest_t *create_all_interests(interest_t *interest)
{
    interest[0] = create_interest(BAT[0], (sfIntRect){0, 0, 32, 32},
    (sfVector2f){940, 540}, &go_combat);
    interest[1] = create_interest(NPC[0], (sfIntRect)
    {0, 0, 32, 50}, (sfVector2f){2250, 320}, &example);
    interest[2] = create_interest("other/blue_block.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){3750, 320}, &example);
    return (interest);
}
