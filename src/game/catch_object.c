/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** catch_object
*/

#include "includes.h"
#include "game.h"
#include "player.h"

void catch_lighter(game_t *g, int i)
{
    if (g->player.inventory[3].own != 1) {
        g->player.inventory[3].own = 1;
    }
    Set_Scale(g->scene[0].interest[17].body.sprite, 0, 0);
}

void catch_lintern(game_t *g, int i)
{
    if (g->player.inventory[4].own != 1) {
        g->player.inventory[4].own = 1;
    }
    Set_Scale(g->scene[g->curent_scene].interest[10].body.sprite, 0, 0);
}

void catch_linternOld(game_t *g, int i)
{
    if (g->player.inventory[5].own != 1) {
        g->player.inventory[5].own = 1;
    }
    Set_Scale(g->scene[g->curent_scene].interest[3].body.sprite, 0, 0);
}

void catch_pickaxe(game_t *g, int i)
{
    if (g->player.inventory[2].own != 1) {
        g->player.inventory[2].own = 1;
    }
    Set_Scale(g->scene[0].interest[18].body.sprite, 0, 0);
}
