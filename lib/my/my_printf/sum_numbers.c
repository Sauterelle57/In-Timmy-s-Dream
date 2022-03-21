/*
** EPITECH PROJECT, 2021
** Printf
** File description:
** sum_numbers
*/

#include "../includes/my.h"

static void *prtab(va_list arg, int sflag, int i)
{
    void (*ptr_di) (va_list, flag_t *) = &disp_flag_int;
    void (*ptr_u) (va_list, flag_t *) = &disp_flag_uint;
    void (*ptr_b) (va_list, flag_t *) = &disp_flag_bint;
    void (*ptr_o) (va_list, flag_t *) = &disp_flag_oint;
    void (*ptr_x) (va_list, flag_t *) = &disp_flag_hexa;
    void (*ptr_X) (va_list, flag_t *) = &disp_flag_hexxa;
    void (*ptr_c) (va_list, flag_t *) = &disp_flag_char;
    void (*ptr_s) (va_list, flag_t *) = &disp_flag_str;
    void (*ptr_p) (va_list, flag_t *) = &disp_flag_ptr;
    void (*ptr_S) (va_list, flag_t *) = &disp_flag_sstr;
    void (*ptr_pc) (va_list, flag_t *) = &disp_flag_pct;
    void (*tab[12]) (va_list arg, flag_t *flag) = {ptr_di, ptr_di, ptr_u, ptr_b
    , ptr_o, ptr_x, ptr_X, ptr_c, ptr_s, ptr_S, ptr_p, ptr_pc};

    return (tab[i]);
}

static void s_flag_check(char *str, va_list l_arg, flag_t *flag, int *i)
{
    flag->s = 0;
    *i += 1;

    if (str[*i] == '-' || str[*i] == '+' || str[*i] == '#' || str[*i] == '0' ||
    str[*i] == ' ') {
        flag->allign = str[*i];
        *i += 1;
    }
    if (str[*i] > '0' && str[*i] <= '9') {
        flag->s = my_getnbr(&str[*i]);
        *i += my_nblen(flag->s);
    }
    flag->index = which_flag(&str[*i]);
}

void my_printf(char *str, ...)
{
    va_list larg;
    flag_t flag = {0, ' ', -1, 'X'};
    void (*tab_ptr_flag[12]) (va_list arg, flag_t *flag) =
    {prtab(larg, flag.s, 0), prtab(larg, flag.s, 1), prtab(larg, flag.s, 2),
    prtab(larg, flag.s, 3), prtab(larg, flag.s, 4), prtab(larg, flag.s, 5),
    prtab(larg, flag.s, 6), prtab(larg, flag.s, 7), prtab(larg, flag.s, 8),
    prtab(larg, flag.s, 9), prtab(larg, flag.s, 10), prtab(larg, flag.s, 11)};
    va_start(larg, str);

    for (int i = 0; str[i]; i++, flag.index = -1, flag.allign = 'X') {
        if (str[i] != '%')
            my_putchar(str[i]);
        if (str[i] == '%')
            s_flag_check(str, larg, &flag, &i);
        if (flag.index >= 0)
            (*tab_ptr_flag[flag.index])(larg, &flag);
        else if (flag.index == -2)
            my_printf("%%%c", str[i]);
    }
    va_end(larg);
}
