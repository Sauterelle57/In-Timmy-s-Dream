/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i]) {
        if (s1[i] == '\0' && s2[i] == '\0')
            return (0);
        i++;
    }
    if (s1[i] == '\0' || (s1[i] < s2[i] && s2[i] != '\0'))
        return (1);
    return (-1);
}
