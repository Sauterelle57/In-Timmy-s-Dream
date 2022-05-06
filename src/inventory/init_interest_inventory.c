/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_interest_inventory
*/

#include "includes.h"
#include "inventory.h"
#include "interest.h"

interest_t *init_inventory_interest(sfRenderWindow *window, int nb_interest)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb_interest);

    return (interest);
}
