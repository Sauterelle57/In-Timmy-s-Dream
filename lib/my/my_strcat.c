/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** my_strcat
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    char *result = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)
    + 2));

    while (dest[j])
        result[i++] = dest[j++];
    j = 0;
    while (src[j])
        result[i++] = src[j++];
    result[i] = '\0';
    return (result);
}
