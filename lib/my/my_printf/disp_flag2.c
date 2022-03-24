/*
** EPITECH PROJECT, 2021
** Printf
** File description:
** disp_flag2
*/

#include "../includes/my.h"

void disp_flag_hexa(va_list arg, flag_t *flag)
{
    int argv = va_arg(arg, int);
    char *hexa_argv = hexa(argv);

    if (flag->s > 0 && flag->allign != '-') {
        for (int i = 0; i < flag->s - my_strlen(hexa_argv); i++)
            my_putchar(flag->disp);
    }
    if ((flag->allign == '+' && argv >= 0) ||
    (flag->allign == ' ' && flag->s - my_strlen(hexa_argv) < 1))
        my_putchar(flag->allign);
    if (flag->allign == '#')
        my_putstr("0x");
    my_putstr(hexa_argv);
    if (flag->allign == '-') {
        for (int i = 0; i < flag->s - my_strlen(hexa_argv); i++)
            my_putchar(flag->disp);
    }
    free(hexa_argv);
}

void disp_flag_uint(va_list arg, flag_t *flag)
{
    unsigned int argv = va_arg(arg, unsigned int);

    if (flag->s > 0 && flag->allign != '-') {
        for (int i = 0; i < flag->s - my_nblen(argv); i++)
            my_putchar(flag->disp);
    }
    if ((flag->allign == '+' && argv >= 0) ||
    (flag->allign == ' ' && flag->s - my_nblen(argv) < 1))
        my_putchar(flag->allign);
    my_put_unbr(argv);
    if (flag->allign == '-') {
        for (int i = 0; i < flag->s - my_nblen(argv); i++)
            my_putchar(flag->disp);
    }
}

void disp_flag_oint(va_list arg, flag_t *flag)
{
    int argv = octal(va_arg(arg, int));

    if (flag->s > 0 && flag->allign != '-') {
        for (int i = 0; i < flag->s - my_nblen(argv); i++)
            my_putchar(flag->disp);
    }
    if ((flag->allign == '+' && argv >= 0) ||
    (flag->allign == ' ' && flag->s - my_nblen(argv) < 1))
        my_putchar(flag->allign);
    if (flag->allign == '#')
        my_putchar('0');
    my_put_nbr(argv);
    if (flag->allign == '-') {
        for (int i = 0; i < flag->s - my_nblen(argv); i++)
            my_putchar(flag->disp);
    }
}

static void sstr_octal(char c)
{
    my_putchar('\\');
    for (int i = 0; i < 3 - my_nblen(octal(c)); i++)
        my_putchar('0');
    my_put_nbr(octal(c));
}

void disp_flag_sstr(va_list arg, flag_t *flag)
{
    char *argv = va_arg(arg, char *);

    if (flag->s > 0 && flag->allign != '-') {
        for (int i = 0; i < flag->s - my_strlen(argv); i++)
            my_putchar(flag->disp);
    }
    for (int i = 0; argv[i]; i++) {
        if (argv[i] < 32 || argv[i] >= 127)
            sstr_octal(argv[i]);
        else
            my_putchar(argv[i]);
    }
    if (flag->allign == '-') {
        for (int i = 0; i < flag->s - my_strlen(argv); i++)
            my_putchar(flag->disp);
    }
}
