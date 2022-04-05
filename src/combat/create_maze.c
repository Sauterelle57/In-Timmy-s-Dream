/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_maze
*/

#include "includes.h"
#include "combat.h"

static char *read_file(char *file)
{
    FILE *fd;
    char *buffer = malloc(sizeof(char) * 390);
    if ((fd = fopen("maze.txt", "r")) == NULL)
        return (NULL);
    fread(buffer, 390, 1, fd);
    buffer[389] = '\0';
    return (buffer);
}

body_t *create_maze(body_t *elem)
{
    int k = 0;
    int x = 200;
    int y = 80;
    char *buffer = read_file("maze.txt");

    elem[k++] = create_body("map/maze_bg.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == 'X')
            elem[k++] = create_body("other/wall.png", (sfIntRect){0, 0, 60, 60},
            (sfVector2f){(x += 60), y});
        if (buffer[i] == '*')
            elem[k++] = create_body("other/floor.png", (sfIntRect){0, 0, 60, 60},
            (sfVector2f){(x += 60), y});
        if (buffer[i] == '\n') {
            x = 200;
            y += 61;
        }
    }
    return (elem);
}
