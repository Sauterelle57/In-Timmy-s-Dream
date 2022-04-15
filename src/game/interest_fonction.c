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
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 96;
    g->player.body.pos.x = 260;
    g->player.body.pos.y = 140;
    Set_Pos(g->player.body.sprite, 260, 140);
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    g->curent_scene = 2;
}

void go_vampire(game_t *g)
{
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    g->curent_scene = 3;
}

void go_ghost(game_t *g)
{
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    g->curent_scene = 4;
}

void go_forest(game_t *g)
{
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    g->curent_scene = 5;
}

void go_inventory(game_t *g)
{
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 0;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    g->player.body.pos.x = 500;
    g->player.body.pos.y = 400;
    Set_Pos(g->player.body.sprite, 500, 400);
    Set_Scale(g->player.body.sprite, 6, 6);
    g->curent_scene = 6;
}

void go_back(game_t *g)
{
    int tmp = g->previous_scene;

    g->player.body.rect.top = 0;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    g->previous_scene = g->curent_scene;
    g->player.body.pos.x = 960;
    g->player.body.pos.y = 540;
    Set_Pos(g->player.body.sprite, 960, 540);
    Set_Scale(g->player.body.sprite, 1, 1);
    g->curent_scene = tmp;
}
