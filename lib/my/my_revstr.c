/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** my_revstr
*/

int my_strlen(char const *);

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    char temp;
    int len2 = len - 1;

    for (int i = 0 ; i < len - 1 ; i++) {
        temp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = temp;
        len--;
    }
    return (str);
}
