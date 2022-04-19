/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** player_mouvement_inventory
*/

#include "includes.h"
#include "inventory.h"

void inventory_movement(game_t *g)
{
    if (Key_Pressed(sfKeyRight))
        g->player.body.rect.top = 96;
    if (Key_Pressed(sfKeyLeft))
        g->player.body.rect.top = 48;
    if (Key_Pressed(sfKeyUp))
        g->player.body.rect.top = 144;
    if (Key_Pressed(sfKeyDown))
        g->player.body.rect.top = 0;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
}
