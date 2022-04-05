/*
** EPITECH PROJECT, 2021
** giantmant
** File description:
** sources.h
*/

#ifndef SOURCE
    #define SOURCE
    #include <time.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <string.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include "../../../../lib/my/includes/my.h"

    typedef struct coord_s {
        int x;
        int y;
    } coord_t;

    typedef struct stack_s {
        int cell_x;
        int cell_y;
        struct stack_s *next;
    } stack_t;

    typedef struct maze_s {
        char **map;
        int width;
        int height;
        int perfect;
        int blocked;
        int stack_size;
        stack_t *stack;
    } maze_t;

    void my_free_tab(char **tab);
    void print_map(maze_t *maze);
    void create_file(maze_t *maze);
    void free_nodes(stack_t *list);
    char **malloc_map(int x, int y);
    int my_list_size(stack_t const *begin);
    void my_delete_first_node(stack_t **begin);
    void bracktracking(maze_t *maze, int x, int y);
    void my_add_node(stack_t **list, int cx, int cy);
    void print_result(maze_t *maze, int *neighbors);

#endif /* !SOURCE */
