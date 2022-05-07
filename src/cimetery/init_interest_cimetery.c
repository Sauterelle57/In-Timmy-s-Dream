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
    {0, 0, 48, 48}, (sfVector2f){820, 300}, &check_dialogue);
    interest[0].line = 11;
    interest[1] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){1120, 0}, &check_dialogue);
    interest[1].line = 12;
    interest[2] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){420, -100}, &check_dialogue);
    interest[2].line = 13;
    interest[3] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){620, 200}, &check_dialogue);
    interest[3].line = 14;
    interest[4] = create_interest("other/blank.png", (sfIntRect){0, 0,
    150, 140}, (sfVector2f){900, 490}, &nothing);
    interest[5] = create_interest("object/Lintern.png", (sfIntRect){0, 0,
    150, 140}, (sfVector2f){-200, 500}, &catch_lintern);
    Set_Scale(interest[5].body.sprite, 2.5, 2.5);
    interest[6] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){520, 450}, &go_combat);
    interest[7] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){350, 600}, &go_combat);
    interest[8] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){640, 300}, &go_combat);
    interest[9] = create_interest(SKELETON[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 48}, (sfVector2f){420, 200}, &go_combat);
    return (interest);
}
