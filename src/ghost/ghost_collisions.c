/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** ghost_collisions
*/

#include "includes.h"

static body_t bodydup(body_t body)
{
    body_t new_body;

    new_body.pos.x = body.pos.x;
    new_body.pos.y = body.pos.y;
    new_body.rect.height = body.rect.height;
    new_body.rect.width = body.rect.width;
    new_body.rect.top = body.rect.top;
    new_body.rect.left = body.rect.left;
    new_body.sprite = body.sprite;
    new_body.text = body.text;
    return (new_body);
}

int ghost_collision(body_t player, body_t elem, sfVector2i new_pos)
{
    body_t player_next = bodydup(player);
    sfFloatRect element = Get_bounds(elem.sprite);

    player_next.pos.x += new_pos.x;
    player_next.pos.y += new_pos.y;
    if (Rect_Intersect(player_next, &element))
        return (1);
    return (0);
}
