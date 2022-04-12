/*
** EPITECH PROJECT, 2022
** generator
** File description:
** main
*/

#include "../include/generator.h"

static int error_handling(int ac, char **av)
{
    if (ac != 3 && ac != 4)
        return (-1);
    if (my_getnbr(av[1]) <= 0 || my_getnbr(av[2]) <= 0)
        return (-2);
    if (ac == 4 && my_strcmp(av[3], "perfect") != 0 &&
    my_strcmp(av[3], "imperfect") != 0)
        return (-3);
    return (0);
}

static void imperfect(maze_t *maze)
{
    int x_wall = rand() % maze->height;
    int y_wall = rand() % maze->width;

    for (int i = 0; i < maze->height / 3; i++) {
        while (maze->map[x_wall][y_wall] != 'X') {
            x_wall = rand() % maze->height;
            y_wall = rand() % maze->width;
        }
        maze->map[x_wall][y_wall] = '*';
    }
}

void print_result(maze_t *maze, int *cell_neigh)
{
    if (maze->width % 2 == 0 && maze->height % 2 == 0) {
        maze->map[maze->height - 1][maze->width - 1] = '*';
        maze->map[maze->height - 2][maze->width - 1] = '*';
    } else if (maze->width % 2 == 0 || maze->height % 2 == 0)
        maze->map[maze->height - 1][maze->width - 1] = '*';
    create_file(maze);
    my_free_tab(maze->map);
    free_nodes(maze->stack);
}

int maze_generation(int width, int height)
{
    maze_t maze;
    stack_t *my_stack = NULL;

    srand(time(NULL));
    maze.width = width;
    maze.height = height;
    maze.map = malloc_map(maze.width, maze.height);
    maze.perfect = 1;
    maze.blocked = 0;
    maze.stack = my_stack;
    maze.stack_size = 1;
    my_add_node(&maze.stack, 0, 0);
    bracktracking(&maze, height / 2, 0);
    return (0);
}
