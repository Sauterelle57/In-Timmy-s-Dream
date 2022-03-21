/*
** EPITECH PROJECT, 2021
** Printf
** File description:
** get_flag
*/

#include "../includes/my.h"

static int rec_nb(unsigned int nb)
{
    if (nb > 9)
        return (rec_nb(nb / 10), rec_nb(nb % 10));
    else {
        my_putchar(nb + 48);
        return (nb % 10 + 48);
    }
    return (nb + 48);
}

int my_put_unbr(unsigned int nb)
{
    if (nb < 0) {
        rec_nb(-1 * nb);
    } else
        rec_nb(nb);
    return (0);
}

int which_flag(char *str)
{
    char *flag = "diuboxXcsSp%";

    for (int i = 0; i < 12; i++) {
        if (str[0] == flag[i])
            return (i);
    }
    return (-2);
}
