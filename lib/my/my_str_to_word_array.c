/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <stdio.h>

char *my_strncpy(char *, char const *, int);

void my_putchar(char);

static int my_tablen(char **tab)
{
    int i = 0;
    while (tab[i] != 0)
        i++;
    return (i);
}

static int is_alphanum(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

static char *create_string(char const *str, int i, char *string)
{
    int begin = i;

    while (is_alphanum(str[i]) == 1 && str[i] != '\0')
        i++;
    string = malloc(sizeof(char) * (i - begin + 1));
    my_strncpy(string, &str[begin], i - begin);
    return (string);
}

static char **my_str_to_word_array2(int count_w, char const *str)
{
    int cut = 1;
    char *string = 0;
    char **tab = 0;
    int index = 0;

    tab = malloc(sizeof(char *) * (count_w + 1));
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alphanum(str[i]) == 0) {
            cut = 1;
        } else if (is_alphanum(str[i]) == 1 && cut == 1) {
            string = create_string(str, i, string);
            tab[index] = string;
            index++;
            cut = 0;
        }
    }
    return (tab);
}

char **my_str_to_word_array(char const *str)
{
    int cut = 1;
    int count_w = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alphanum(str[i]) == 0) {
            cut = 1;
        } else if (is_alphanum(str[i]) == 1 && cut == 1) {
            count_w += 1;
            cut = 0;
        }
    }
    return (my_str_to_word_array2(count_w, str));
}
