/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** neighbors
*/

#include "../include/generator.h"

int **init_tab_neighbors(void)
{
    int **neighbors = malloc(sizeof(int *) * 5);

    for (int i = 0; i < 4; i++) {
        neighbors[i] = malloc(sizeof(int) * 4);
        neighbors[i][0] = -1;
        neighbors[i][1] = -1;
        neighbors[i][2] = -1;
        neighbors[i][3] = -1;
    }
    neighbors[4] = NULL;
    return (neighbors);
}

static int neighbors_2(maze_t *maze, int **neighbors, coord_t *c, int *el)
{
    if (c->y + 1 < maze->width && c->y + 2 < maze->width) {
        neighbors[*el][0] = maze->map[c->x][c->y + 1] != '*' ? c->x : -1;
        neighbors[*el][1] = maze->map[c->x][c->y + 1] != '*' ? c->y + 1 : -1;
        neighbors[*el][2] = maze->map[c->x][c->y + 2] != '*' ? c->x : -1;
        neighbors[*el][3] = maze->map[c->x][c->y + 2] != '*' ? c->y + 2 : -1;
        *el += maze->map[c->x][c->y + 1] != '*' && maze->map[c->x][c->y + 2] !=
        '*' ? 1 : 0;
    }
    if (c->y - 1 >= 0 && c->y - 2 >= 0) {
        neighbors[*el][0] = maze->map[c->x][c->y - 1] != '*' ? c->x : -1;
        neighbors[*el][1] = maze->map[c->x][c->y - 1] != '*' ? c->y - 1 : -1;
        neighbors[*el][2] = maze->map[c->x][c->y - 2] != '*' ? c->x : -1;
        neighbors[*el][3] = maze->map[c->x][c->y - 2] != '*' ? c->y - 2 : -1;
        *el += maze->map[c->x][c->y - 1] != '*' && maze->map[c->x][c->y - 2] !=
        '*' ? 1 : 0;
    }
    return (*el);
}

void neighbors(maze_t *maze, coord_t *c, int **neighbors)
{
    int el = 0;

    if (c->x + 1 < maze->height && c->x + 2 < maze->height) {
        neighbors[el][0] = maze->map[c->x + 1][c->y] != '*' ? c->x + 1 : -1;
        neighbors[el][1] = maze->map[c->x + 1][c->y] != '*' ? c->y : -1;
        neighbors[el][2] = maze->map[c->x + 2][c->y] != '*' ? c->x + 2 : -1;
        neighbors[el][3] = maze->map[c->x + 2][c->y] != '*' ? c->y : -1;
        el += maze->map[c->x + 1][c->y] != '*' && maze->map[c->x + 2][c->y] !=
        '*' ? 1 : 0;
    }
    if (c->x - 1 >= 0 && c->x - 2 >= 0) {
        neighbors[el][0] = maze->map[c->x - 1][c->y] != '*' ? c->x - 1 : -1;
        neighbors[el][1] = maze->map[c->x - 1][c->y] != '*' ? c->y : -1;
        neighbors[el][2] = maze->map[c->x - 2][c->y] != '*' ? c->x - 2 : -1;
        neighbors[el][3] = maze->map[c->x - 2][c->y] != '*' ? c->y : -1;
        el += maze->map[c->x - 1][c->y] != '*' && maze->map[c->x - 2][c->y] !=
        '*' ? 1 : 0;
    }
    if (neighbors_2(maze, neighbors, c, &el) == 0)
        maze->blocked = 1;
}
