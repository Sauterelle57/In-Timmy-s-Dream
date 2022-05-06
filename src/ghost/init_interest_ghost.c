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
    interest[0] = create_interest(GHOST[(rand() % 3) * 3], (sfIntRect) //ghost
    {0, 0, 48, 70}, (sfVector2f){820, 300}, &example);
    interest[1] = create_interest(GHOST[(rand() % 3) * 3], (sfIntRect) //ghost couisine
    {0, 0, 48, 70}, (sfVector2f){1120, -100}, &example);
    interest[2] = create_interest(GHOST[(rand() % 3) * 3], (sfIntRect) //ghost chambre
    {0, 0, 48, 70}, (sfVector2f){420, -500}, &example);
    interest[3] = create_interest("other/blank.png", (sfIntRect){0, 0, 120, 40}, //entrée / sortie
    (sfVector2f){900, 560}, &go_game);
    interest[4] = create_interest("object/LinternOld.png", (sfIntRect){0, 0, 120, 40}, //entrée / sortie
    (sfVector2f){900, -170}, &catch_linternOld);
    Set_Scale(interest[4].body.sprite, 2.5, 2.5);
    return (interest);
}
