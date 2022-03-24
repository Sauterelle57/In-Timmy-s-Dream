/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int count = 0;

    for (int i = 0 ; str[i] != '\0' ; i++)
        count++;
    return (count);
}
