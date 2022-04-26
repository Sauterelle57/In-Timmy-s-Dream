/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <stdio.h>

static int count_sep(char *str, char c)
{
    int count = 0;

    for (int i = 0; str[i]; i++)
        count += str[i] == c ? 1 : 0;
    return (count + 1);
}

int count_m(char *str, char sep)
{
    int count = 0;

    for (; str[count] != sep && str[count] != '\0'; count++);
    return (count + 1);
}

char **my_str_to_word_array(char *str, char sep)
{
    int counter = count_sep(str, sep);
    char **res = malloc(sizeof(char *) * (counter + 1));
    int line = 0;

    res[0] = malloc(sizeof(char) * count_m(str, sep) + 1);
    if (res[0] == NULL)
        return (NULL);
    for (int i = 0, col = 0; str[i]; i++, col++) {
        if (str[i] == sep) {
            res[++line] = malloc(sizeof(char) * count_m(&str[i + 1], sep));
            if (res[line] == NULL)
                return (NULL);
            col = -1;
        } else {
            res[line][col] = str[i];
            res[line][col + 1] = '\0';
        }
    }
    res[line + 1] = NULL;
    return (res);
}
