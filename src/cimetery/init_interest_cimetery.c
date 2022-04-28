/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_interest_cimetery
*/

#include "includes.h"
#include "cimetery.h"
#include "interest.h"

interest_t *init_cimetery_interest(sfRenderWindow *window, int nb_interest)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    interest[0] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect) //SKELETON
    {0, 0, 48, 48}, (sfVector2f){820, 300}, &example);
    interest[1] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect) //SKELETON
    {0, 0, 48, 48}, (sfVector2f){1120, 0}, &example);
    interest[2] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect) //SKELETON
    {0, 0, 48, 48}, (sfVector2f){420, -100}, &example);
    interest[3] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect) //SKELETON
    {0, 0, 48, 48}, (sfVector2f){620, 200}, &example);
    interest[4] = create_interest("other/blue_block.png", (sfIntRect){0, 0, //entrée / sortie
    150, 140}, (sfVector2f){900, 490}, &go_game);
    return (interest);
}
