/*
** EPITECH PROJECT, 2021
** my
** File description:
** my
*/

#ifndef MY
    #define MY

    #include <stdio.h>
    #include <unistd.h>
    #include <stdarg.h>
    #include <stdlib.h>

    int my_isneg(int);
    int my_nblen(int);
    int my_put_nbr(int);
    int my_is_prime(int);
    void my_putchar(char);
    char *my_revstr(char *);
    char *my_int_to_str(int);
    void my_free_tab(char **);
    int result(long, int, int);
    void my_swap(int *, int *);
    int my_find_prime_sup(int);
    char *my_strupcase(char *);
    int my_putstr(char const *);
    int my_strlen(char const *);
    int my_getnbr(char const *);
    char *my_strlowcase(char *);
    int my_showstr(char const *);
    char *my_strdup(char const *);
    char *my_strcapitalize(char *);
    int my_str_isnum(char const *);
    int my_compute_square_root(int);
    int my_str_isalpha(char const *);
    int my_str_islower(char const *);
    int my_str_isupper(char const *);
    int my_showmem(char const *, int);
    void my_sort_int_array(int *, int);
    int my_compute_power_rec(int, int);
    int my_str_isprintable(char const *);
    int my_show_word_array(char *const *);
    char *my_strcat(char *, char const *);
    char *my_strstr(char *, char const *);
    char *my_strcpy(char *, char const *);
    void my_str_to_word_array(char const *);
    int my_strcmp(char const *, char const *);
    char *my_strncpy(char *, char const *, int);
    char *my_strncat(char *, char const *, int);
    int my_strncmp(char const *, char const *, int);

    typedef struct flag_s {
        int s;
        char disp;
        int index;
        char allign;
    } flag_t;

    int octal(int nb);
    char *binary(int nb);
    int my_nblen(int nb);
    int which_flag(char *str);
    char *hexa(unsigned int nb);
    char *hexxa(unsigned int nb);
    void my_printf(char *str, ...);
    int my_put_unbr(unsigned int nb);
    void disp_flag_str(va_list arg, flag_t *flag);
    void disp_flag_int(va_list arg, flag_t *flag);
    void disp_flag_pct(va_list arg, flag_t *flag);
    void disp_flag_ptr(va_list arg, flag_t *flag);
    void disp_flag_sstr(va_list arg, flag_t *flag);
    void disp_flag_char(va_list arg, flag_t *flag);
    void disp_flag_bint(va_list arg, flag_t *flag);
    void disp_flag_oint(va_list arg, flag_t *flag);
    void disp_flag_hexa(va_list arg, flag_t *flag);
    void disp_flag_hexxa(va_list arg, flag_t *flag);
    void disp_flag_uint(va_list arg, flag_t *flag);

#endif /* !MY */
