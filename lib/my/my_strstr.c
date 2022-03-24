/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** my_strstr
*/

#include <stdio.h>
int my_strlen(char *str);
int my_strncmp(char *, char *, int);

char *my_strstr(char *str, char *to_find)
{
    for (int i = 0; str[i];) {
        if (!my_strncmp(&str[i], to_find, my_strlen(to_find)))
            return (&str[i]);
            i++;
        }
    return (NULL);
}
