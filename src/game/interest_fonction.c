/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** door_interest
*/

#include "includes.h"
#include "game.h"

void example(game_t *g)
{
    printf("Action !\n");
}

void go_combat(game_t *g)
{
    g->player.body.pos.x = 260;
    g->player.body.pos.y = 140;
    Set_Pos(g->player.body.sprite, 260, 140);
    g->curent_scene = 2;
}
