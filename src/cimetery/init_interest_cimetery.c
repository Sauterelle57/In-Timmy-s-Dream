/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_interest_cimetery
*/

#include "includes.h"
#include "cimetery.h"
#include "interest.h"
#include "game.h"

interest_t *init_cimetery_interest(sfRenderWindow *window, int nb_interest)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    interest[0] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){820, 300}, &nothing);
    interest[1] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){1120, 0}, &nothing);
    interest[2] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){420, -100}, &nothing);
    interest[3] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){620, 200}, &nothing);
    interest[4] = create_interest("other/blank.png", (sfIntRect){0, 0,
    150, 140}, (sfVector2f){900, 490}, &go_game);
    interest[5] = create_interest("object/Lintern.png", (sfIntRect){0, 0,
    150, 140}, (sfVector2f){-200, 500}, &catch_lintern);
    Set_Scale(interest[5].body.sprite, 2.5, 2.5);
    return (interest);
}
