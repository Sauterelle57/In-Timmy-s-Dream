/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_interest_ghost
*/

#include "includes.h"
#include "ghost.h"
#include "interest.h"

interest_t *init_ghost_interest(sfRenderWindow *window, int nb_interest)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    interest[0] = create_interest(GHOST[0], (sfIntRect) //ghost
    {0, 0, 48, 70}, (sfVector2f){820, 300}, &example);
    interest[1] = create_interest(GHOST[0], (sfIntRect) //ghost couisine
    {0, 0, 48, 70}, (sfVector2f){1120, -100}, &example);
    interest[2] = create_interest(GHOST[0], (sfIntRect) //ghost chambre
    {0, 0, 48, 70}, (sfVector2f){420, -500}, &example);
    interest[3] = create_interest("other/block.png", (sfIntRect){0, 0, 120, 40}, //entrée / sortie
    (sfVector2f){900, 560}, &go_game);
    return (interest);
}
