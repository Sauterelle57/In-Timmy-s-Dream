/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** random
*/

#include "includes.h"

unsigned int get_random(void)
{
    char buffer[100];
    int fd = open("/dev/urandom", S_IRUSR);
    unsigned int result = 0;

    if (fd == -1)
        return (15623);
    if (read(fd, buffer, 100) == -1)
        return (45865);
    for (int i = 0; i < 100; ++i)
        result += buffer[i];
    close(fd);
    return (result);
}
