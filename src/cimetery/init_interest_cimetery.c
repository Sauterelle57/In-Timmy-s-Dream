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

interest_t *init_cimetery_interest_2(interest_t *interest)
{
    interest[5] = create_interest("object/Lintern.png", (sfIntRect){0, 0,
    150, 140}, (sfVector2f){-200, 500}, &catch_lintern);
    Set_Scale(interest[5].body.sprite, 2.5, 2.5);
    interest[6] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){210, 350}, &check_dialogue);
    interest[6].line = 11;
    interest[7] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){1700, 390}, &check_dialogue);
    interest[7].line = 12;
    interest[8] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){340, -620}, &check_dialogue);
    interest[8].line = 13;
    interest[9] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){1600, -400}, &check_dialogue);
    interest[9].line = 14;
    return (interest);
}

interest_t *init_cimetery_interest(sfRenderWindow *window, int nb_interest)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    interest[0] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){20, 530}, &go_combat);
    interest[1] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){1430, 580}, &go_combat);
    interest[2] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){-150, -400}, &go_combat);
    interest[3] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){2000, -430}, &go_combat);
    interest[4] = create_interest("other/blank.png", (sfIntRect){0, 0,
    150, 140}, (sfVector2f){900, 490}, &nothing);
    interest = init_cimetery_interest_2(interest);
    return (interest);
}
