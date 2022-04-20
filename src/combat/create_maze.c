/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_maze
*/

#include <fcntl.h>
#include "includes.h"
#include "combat.h"

static char *read_file(char *file)
{
    int fd = open(file, O_RDONLY);
    char *buffer = malloc(sizeof(char) * 361);

    if (buffer == NULL)
        printf("Error malloc\n");
    if (fd < 0)
        printf("Error open\n");
    if (read(fd, buffer, 360) < 0)
        printf("Error read\n");
    buffer[360] = '\0';
    return (buffer);
}

static body_t *create_maze_wall(body_t *elem, char *buffer, int k)
{
    for (int i = 0, x = 200, y = 80; buffer[i]; i++) {
        if (buffer[i] == 'X')
            elem[k++] = create_body("other/wall.png", (sfIntRect){0, 0, 60, 60}
            , (sfVector2f){(x += 60), y});
        x += buffer[i] == '*' ? 60 : 0;
        x = buffer[i] == '\n' ? 200 : x;
        y += buffer[i] == '\n' ? 60 : 0;
    }
    for (int i = 0, x = 200, y = 20; i < 30; i++) {
        elem[k++] = create_body("other/wall.png", (sfIntRect){0, 0, 60, 60}
        , (sfVector2f){x, (y += 60)});
        x = i == 14 ? 1640 : x;
        y = i == 14 ? 20 : y;
    }
    return (elem);
}

int create_view(body_t *elem, int k, game_t *g)
{
    elem[376] = create_body("other/font_invisible.png", (sfIntRect){0, 0, 4032, 3024},
    (sfVector2f){-1700 - 0, -1300});
    return (k);
}

body_t *create_maze(body_t *elem, game_t *g)
{
    int k = 0;
    char *buffer = read_file("./maze.txt");

    elem = malloc(sizeof(body_t) * (my_strlen(buffer) + 31));
    elem[k++] = create_body("map/maze_bg.png", (sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0});
    for (int i = 0, x = 200, y = 80; buffer[i]; i++) {
        x += buffer[i] == 'X' ? 60 : 0;
        if (buffer[i] == '*')
            elem[k++] = create_body("other/floor.png", (sfIntRect){0, 0, 60,
            60}, (sfVector2f){(x += 60), y});
        x = buffer[i] == '\n' ? 200 : x;
        y += buffer[i] == '\n' ? 60 : 0;
    }
    k = create_view(elem, k, g);
    return (create_maze_wall(elem, buffer, k));
}
