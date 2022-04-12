/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** it_bactracking2
*/

#include "../include/generator.h"

static int empty_neighbors(int *neighbors)
{
    for (int i = 0; i < 4; i++)
        if (neighbors[i] == 1)
            return (0);
    return (1);
}

static void get_neighbors(maze_t *maze, int x, int y, int *neighbors)
{
    for (int i = 0; i < 4; ++i)
        neighbors[i] = 0;
    if (x + 2 < maze->height)
        neighbors[0] = maze->map[x + 2][y] == 'X' ? 1 : 0;
    if (x - 2 >= 0)
        neighbors[1] = maze->map[x - 2][y] == 'X' ? 1 : 0;
    if (y + 2 < maze->width)
        neighbors[2] = maze->map[x][y + 2] == 'X' ? 1 : 0;
    if (y - 2 >= 0)
        neighbors[3] = maze->map[x][y - 2] == 'X' ? 1 : 0;
}

static int choose_random_neighbors(int *neighbors)
{
    int k = rand() % 4;

    while (neighbors[k] != 1)
        k = rand() % 4;
    return (k);
}

static void go_to_neighbors(maze_t *maze, int *x, int *y, int *neighbors)
{
    int k = choose_random_neighbors(neighbors);

    switch (k) {
        case 0:
            maze->map[*x + 1][*y] = '*';
            *x += 2;
            break;
        case 1:
            maze->map[*x - 1][*y] = '*';
            *x -= 2;
            break;
        case 2:
            maze->map[*x][*y + 1] = '*';
            *y += 2;
            break;
        case 3:
            maze->map[*x][*y - 1] = '*';
            *y -= 2;
            break;
    }
}

void bracktracking(maze_t *maze, int x, int y)
{
    int neighbors[4] = {0, 0, 0, 0};

    while (maze->stack_size > 0) {
        maze->map[x][y] = '*';
        get_neighbors(maze, x, y, neighbors);
        if (empty_neighbors(neighbors)) {
            x = maze->stack->cell_x;
            y = maze->stack->cell_y;
            my_delete_first_node(&maze->stack);
            maze->stack_size--;
        } else {
            go_to_neighbors(maze, &x, &y, neighbors);
            my_add_node(&maze->stack, x, y);
            maze->stack_size++;
        }
    }
    print_result(maze, neighbors);
}
