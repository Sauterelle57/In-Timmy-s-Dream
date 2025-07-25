/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_interest_forest
*/

#include "includes.h"
#include "forest.h"
#include "interest.h"

interest_t *init_forest_interest(sfRenderWindow *window, int nb_interest)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    interest[0] = create_interest(ZOMBIE[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 70}, (sfVector2f){40, 440}, &go_combat);
    interest[1] = create_interest(ZOMBIE[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 70}, (sfVector2f){-230, -260}, &check_dialogue);
    interest[1].line = 8;
    interest[2] = create_interest(ZOMBIE[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 70}, (sfVector2f){-600, 60}, &go_combat);
    interest[3] = create_interest(ZOMBIE[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 70}, (sfVector2f){380, -70}, &go_combat);
    interest[4] = create_interest("other/block.png", (sfIntRect){0, 0, 120,
    40}, (sfVector2f){900, 560}, &go_game);
    Set_Scale(interest[1].body.sprite, 2, 2);
    return (interest);
}
