/*
** EPITECH PROJECT, 2021
** Prinf
** File description:
** disp flag 3
*/

#include "../includes/my.h"

void disp_flag_hexxa(va_list arg, flag_t *flag)
{
    int argv = va_arg(arg, int);
    char *hexa_argv = hexxa(argv);

    if (flag->s > 0 && flag->allign != '-') {
        for (int i = 0; i < flag->s - my_strlen(hexa_argv); i++)
            my_putchar(flag->disp);
    }
    if ((flag->allign == '+' && argv >= 0) ||
    (flag->allign == ' ' && flag->s - my_strlen(hexa_argv) < 1))
        my_putchar(flag->allign);
    if (flag->allign == '#')
        my_putstr("0X");
    my_putstr(hexa_argv);
    if (flag->allign == '-') {
        for (int i = 0; i < flag->s - my_strlen(hexa_argv); i++)
            my_putchar(flag->disp);
    }
    free(hexa_argv);
}

void disp_flag_ptr(va_list arg, flag_t *flag)
{
    unsigned int argv = va_arg(arg, unsigned int);
    char *address = hexa(argv);

    if (flag->s > 0 && flag->allign != '-') {
        for (int i = 0; i < flag->s - my_strlen(address); i++)
            my_putchar(flag->disp);
    }
    my_printf("0x%s", address);
    if (flag->allign == '-') {
        for (int i = 0; i < flag->s - my_strlen(address); i++)
            my_putchar(flag->disp);
    }
    free(address);
}
