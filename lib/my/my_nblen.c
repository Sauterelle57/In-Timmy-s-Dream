/*
** EPITECH PROJECT, 2021
** my_nblen
** File description:
** my_nblen
*/

int my_nblen(int nb)
{
    int i = 0;

    for (i, nb = nb > 0 ? nb : nb * -10; nb > 0; i++, nb /= 10);
    return (i);
}
