/*
** EPITECH PROJECT, 2021
** Printf
** File description:
** disp_flag
*/

#include "../includes/my.h"

void disp_flag_int(va_list arg, flag_t *flag)
{
    int argv = va_arg(arg, int);

    if (flag->s > 0 && flag->allign != '-') {
        for (int i = 0; i < flag->s - my_nblen(argv); i++)
            my_putchar(flag->disp);
    }
    if ((flag->allign == '+' && argv >= 0) ||
    (flag->allign == ' ' && flag->s - my_nblen(argv) < 1))
        my_putchar(flag->allign);
    my_put_nbr(argv);
    if (flag->allign == '-') {
        for (int i = 0; i < flag->s - my_nblen(argv); i++)
            my_putchar(flag->disp);
    }
}

void disp_flag_str(va_list arg, flag_t *flag)
{
    char *argv = va_arg(arg, char *);

    if (flag->s > 0 && flag->allign != '-') {
        for (int i = 0; i < flag->s - my_strlen(argv); i++)
            my_putchar(flag->disp);
    }
    my_putstr(argv);
    if (flag->allign == '-') {
        for (int i = 0; i < flag->s - my_strlen(argv); i++)
            my_putchar(flag->disp);
    }
}

void disp_flag_char(va_list arg, flag_t *flag)
{
    if (flag->s > 0 && flag->allign != '-') {
        for (int i = 1; i < flag->s; i++)
            my_putchar(flag->disp);
    }
    my_putchar(va_arg(arg, int));
    if (flag->allign == '-') {
        for (int i = 1; i < flag->s; i++)
            my_putchar(flag->disp);
    }
}

void disp_flag_bint(va_list arg, flag_t *flag)
{
    char *argv = binary(va_arg(arg, int));

    if (flag->s > 0 && flag->allign != '-') {
        for (int i = 0; i < flag->s - my_strlen(argv); i++)
            my_putchar(flag->disp);
    }
    if ((flag->allign == '+' && argv >= 0) ||
    (flag->allign == ' ' && flag->s - my_strlen(argv) < 1))
        my_putchar(flag->allign);
    my_putstr(argv);
    if (flag->allign == '-') {
        for (int i = 0; i < flag->s - my_strlen(argv); i++)
            my_putchar(flag->disp);
    }
    free(argv);
}

void disp_flag_pct(va_list arg, flag_t *flag)
{
    my_putchar('%');
}
