/*
** EPITECH PROJECT, 2021
** my_strupcase
** File description:
** my_strupcase
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 32;
    }
    return (str);
}
