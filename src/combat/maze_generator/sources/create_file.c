/*
** EPITECH PROJECT, 2022
** maze generation
** File description:
** create_file
*/

#include "../include/generator.h"

void create_file(maze_t *maze)
{
    FILE *fd;

    if ((fd = fopen("maze.txt", "w+")) == NULL)
        return;
    for (int i = 0; i < maze->height; i++) {
        fwrite(maze->map[i], 1, my_strlen(maze->map[i]), fd);
        fwrite("\n", 1, 1, fd);
    }
    fclose(fd);
}
