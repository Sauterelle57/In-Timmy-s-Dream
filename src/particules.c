/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** particules
*/

#include "includes.h"

particule_t *framebuffer_clear(particule_t *array)
{
    sfVertexArray_clear(array->pixels);
    return (array);
}

void add_pixel(sfVertexArray *pixels, sfVector2f pos, sfColor color)
{
    sfVertex vertex = {pos, color, (sfVector2f){0, 0}};

    sfVertexArray_append(pixels, vertex);
}
