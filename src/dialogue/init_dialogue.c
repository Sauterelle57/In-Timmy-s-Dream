/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** init_dialogue
*/

#include "dialogue.h"
#include "includes.h"

char *open_text(void)
{
    char *buffer;
    int fd = open("all_dialogue.txt", O_RDONLY);
    int count = 0;
    char* temp = malloc(sizeof(char) * 1);

    for (; (read(fd, temp, 1) > 0); ++count);
    close(fd);
    fd = open("all_dialogue.txt", O_RDONLY);
    buffer = malloc(sizeof(char) * (count + 1));
    if (fd == -1 || count == 0 || buffer == NULL)
        return (NULL);
    read(fd, buffer, count);
    buffer[count] = '\0';
    close(fd);
    return (buffer);
}
