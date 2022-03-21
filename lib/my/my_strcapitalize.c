/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** my_strcapitalize
*/

static int maj_c(char a, char b)
{
    if (b >= 'a' && b <= 'z') {
        if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
            return (0);
        else if (a >= '0' && a <= '9')
            return (0);
        return (1);
    }
}

static int min_c(char a, char b)
{
    if (b >= 'A' && b <= 'Z') {
        if ((a >= 'a' && a <= 'z') || (a >= '0' && a <= '9'))
            return (1);
        else if (a >= 'A' && a <= 'Z')
            return (1);
        return (0);
    }
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (min_c(str[i - 1], str[i]) == 1)
            str[i] = str[i] + 32;
        if (maj_c(str[i - 1], str[i]) == 1)
            str[i] = str[i] - 32;
    }
    return (str);
}
