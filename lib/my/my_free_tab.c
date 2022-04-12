/*
** EPITECH PROJECT, 2022
** lib
** File description:
** free tab
*/

#include <stdlib.h>

void my_free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}
