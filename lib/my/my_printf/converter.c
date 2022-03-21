/*
** EPITECH PROJECT, 2021
** Printf
** File description:
** converter
*/

#include "../includes/my.h"

int octal(int nb)
{
    int i = 0;
    int o_nb = 0;
    int sign = nb < 0 ? -1 : 1;

    nb = nb < 0 ? nb * -1 : nb;
    while (nb > 0) {
        o_nb += (nb % 8) * my_compute_power_rec(10, i++);
        nb = nb / 8;
    }
    return (o_nb * sign);
}

char *binary(int nb)
{
    char *b_nb = malloc(my_nblen(nb) * 4 + 1);
    int i = 0;
    int sign = nb < 0 ? -1 : 1;

    nb = nb < 0 ? nb * -1 : nb;
    while (nb > 0) {
        b_nb[i++] = (nb % 2) + 48;
        nb = nb / 2;
    }
    if (sign == -1)
        b_nb[i++] = '-';
    b_nb[i] = '\0';
    return (my_revstr(b_nb));
}

char *hexa(unsigned int nb)
{
    int i = 0;
    int sign = 0;
    char *int_tab = "0123456789abcdef";
    char *hexa_nb = malloc(sizeof(char) * (my_nblen(nb) + 10));

    if (nb == 0)
        return ("0");
    for (i; nb > 0; i++) {
        hexa_nb[i] = int_tab[(nb % 16)];
        nb = nb / 16;
    }
    hexa_nb[i] = '\0';
    return (my_revstr(hexa_nb));
}

char *hexxa(unsigned int nb)
{
    int i = 0;
    int sign = 0;
    char *int_tab = "0123456789ABCDEF";
    int len = my_nblen(nb);
    char *hexa_nb = malloc(sizeof(char) * (len + 10));

    if (nb == 0)
        return ("0");
    for (i; nb > 0; i++) {
        hexa_nb[i] = int_tab[(nb % 16)];
        nb = nb / 16;
    }
    hexa_nb[i] = '\0';
    return (my_revstr(hexa_nb));
}
