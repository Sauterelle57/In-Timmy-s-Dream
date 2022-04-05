/*
** EPITECH PROJECT, 2021
** linked_list
** File description:
** linked_list
*/

#include "../include/generator.h"

void display_node(stack_t const *begin)
{
    while (begin != NULL) {
        my_printf("-> %d %d\n", begin->cell_x, begin->cell_y);
        begin = begin->next;
    }
}

int my_list_size(stack_t const *begin)
{
    int count = 0;

    while (begin != NULL) {
        begin = begin->next;
        count++;
    }
    return (count);
}

void my_add_node(stack_t **list, int cx, int cy)
{
    stack_t *new;

    new = malloc(sizeof(*new));
    new->cell_x = cx;
    new->cell_y = cy;
    new->next = *list;
    *list = new;
}

void free_nodes(stack_t *list)
{
    stack_t *tmp = list;
    stack_t *tampon;

    while (tmp != NULL) {
        tampon = tmp->next;
        free(tmp);
        tmp = tampon;
    }
}

void my_delete_first_node(stack_t **begin)
{
    stack_t *tmp = *begin;
    stack_t *tampon = tmp;

    if (*begin == NULL)
        return;
    tmp = tmp->next;
    free(tampon);
    *begin = tmp;
}
