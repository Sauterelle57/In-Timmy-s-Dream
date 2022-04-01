/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** move_sprite2
*/

#include "includes.h"

static int absolute(int nb)
{
    if (nb == 0)
        return (0);
    return (nb < 0 ? -1 : 1);
}

void move_sprite(body_t *sprite, sfVector2f pos, int speed)
{
    int velocity_x = pos.x - sprite->pos.x;
    int velocity_y = pos.y - sprite->pos.y;

    if (velocity_x <= -1)
        Set_Scale(sprite->sprite, -1, 1);
    sprite->pos.x += absolute(velocity_x) * speed;
    sprite->pos.y += absolute(velocity_y) * speed;
    Set_Pos(sprite->sprite, sprite->pos.x, sprite->pos.y);
}
