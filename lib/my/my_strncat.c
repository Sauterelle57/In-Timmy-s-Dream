/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** my_strncat
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    for (int i = 0; src[i] != '\0'; i++) {
        if (i < nb)
            dest[my_strlen(dest)] = src[i];
        else {
            dest[my_strlen(dest)] = '\0';
            return (dest);
        }
        dest[my_strlen(dest)] = '\0';
    }
    return (dest);
}
