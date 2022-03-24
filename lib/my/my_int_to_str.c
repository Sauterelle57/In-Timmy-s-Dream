/*
** EPITECH PROJECT, 2021
** my_int_to_str
** File description:
** convert int to str
*/

#include <stdlib.h>

char *my_revstr(char *str);

char *my_int_to_str(int nb)
{
    int i = 0;
    char *my_str;
    char sign = nb < 0 ? '-' : '+';

    if (nb == 0)
        return ("0");
    my_str = malloc(sizeof(char) * 12);
    nb = nb < 0 ? nb * -1 : nb;
    for (i; nb > 0; i++) {
        my_str[i] = nb % 10 + '0';
        nb /= 10;
    }
    if (sign == '-') {
        my_str[i] = sign;
        my_str[i + 1] = '\0';
    } else
        my_str[i] = '\0';
    my_revstr(my_str);
    return (my_str);
}
