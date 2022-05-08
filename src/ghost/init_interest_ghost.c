/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_interest_ghost
*/

#include "includes.h"
#include "ghost.h"
#include "interest.h"
#include "game.h"

interest_t *init_ghost_interest(sfRenderWindow *window, int nb_interest)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);
    interest[0] = create_interest(GHOST[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 70}, (sfVector2f){820, 300}, &go_combat);
    interest[1] = create_interest(GHOST[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 70}, (sfVector2f){1120, -100}, &check_dialogue);
    interest[1].line = 6;
    Set_Scale(interest[1].body.sprite, 2, 2);
    interest[2] = create_interest(GHOST[(rand() % 3) * 3], (sfIntRect)
    {0, 0, 48, 70}, (sfVector2f){420, -500}, &go_combat);
    interest[3] = create_interest("object/LinternOld.png", (sfIntRect){0, 0,
    120, 40}, (sfVector2f){900, -170}, &catch_linternOld);
    Set_Scale(interest[3].body.sprite, 2.5, 2.5);
    interest[4] = create_interest("other/blank.png", (sfIntRect){0, 0, 120,
    40}, (sfVector2f){900, 560}, &go_game);
    return (interest);
}
