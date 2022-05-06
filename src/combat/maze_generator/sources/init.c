/*
** EPITECH PROJECT, 2022
** generator
** File description:
** init char
*/

#include "../include/generator.h"

char **malloc_map(int x, int y)
{
    char **map = malloc(sizeof(char *) * (y + 1));

    for (int i = 0; i < y; i++) {
        map[i] = malloc(sizeof(char) * (x + 1));
        for (int j = 0; j < x; j++)
            map[i][j] = 'X';
        map[i][x] = '\0';
    }
    map[y] = NULL;
    return (map);
}

void print_map(maze_t *maze)
{
    char *all_map = malloc(sizeof(char) * (maze->height * maze->width +
    maze->height + 1));
    int index = 0;

    for (int i = 0; i < maze->height; i++) {
        for (int j = 0; j < maze->width; j++)
            all_map[index++] = maze->map[i][j];
        all_map[index++] = '\n';
    }
    all_map[index - 1] = '\0';
    write(1, all_map, index - 1);
}
