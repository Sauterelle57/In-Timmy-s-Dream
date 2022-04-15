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

    interest[0] = create_interest(ZOMBIE[0], (sfIntRect) //zombie
    {0, 0, 48, 70}, (sfVector2f){40, 440}, &go_combat);
    interest[1] = create_interest(ZOMBIE[0], (sfIntRect) //zombie
    {0, 0, 48, 70}, (sfVector2f){-230, -260}, &go_combat);
    interest[2] = create_interest(ZOMBIE[0], (sfIntRect) //zombie
    {0, 0, 48, 70}, (sfVector2f){-600, 60}, &go_combat);
    interest[3] = create_interest(ZOMBIE[0], (sfIntRect) //zombie
    {0, 0, 48, 70}, (sfVector2f){380, -70}, &go_combat);
    interest[4] = create_interest("other/block.png", (sfIntRect){0, 0, 120, 40}, //entrée / sortie
    (sfVector2f){900, 560}, &go_back);
    return (interest);
}
