/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** draw_inventory
*/

#include "includes.h"
#include "inventory.h"
#include "player.h"

object_t *init_object_inventory(object_t *inventory)
{
    for (int i = 0, x = 1000, y = 450; i < NB_OBJ; i++) {
        inventory[i].body.pos.x = (x += 74);
        inventory[i].body.pos.y = y;
        Set_Pos(inventory[i].body.sprite, x - 74, y);
        Set_Scale(inventory[i].body.sprite, 4, 4);
        y += x >= 1280 ? 74 : 0;
        x = x >= 1280 ? 1000 : x;
    }
}

void draw_inventory(game_t *g)
{
    Draw_Sprite(g->scene[6].elem[0].sprite);
    for (int i = 0; i < g->scene[6].nb_interest; i++) //affichage interest point
        Draw_Sprite(g->scene[6].interest[i].body.sprite);
    for (int i = 0; i < g->scene[6].nb_button; i++)
        Draw_Sprite(g->scene[6].button[i].body.sprite);
    init_object_inventory(g->player.inventory);
    for (int i = 0; i < NB_OBJ; i++) //affichage objets du joueur
        if (g->player.inventory[i].own == 1)
            Draw_Sprite(g->player.inventory[i].body.sprite);
    draw_player(g);
}
