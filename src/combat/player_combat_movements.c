/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** player_mouvements
*/

#include "includes.h"
#include "combat.h"

static void go_right(game_t *g)
{
    g->player.body.rect.top = 96;
    for (int i = 169; i < g->scene[g->curent_scene].nb_elem - 1; i++)
        if (combat_collision(g->player.body, g->scene[g->curent_scene].elem[i],
        (sfVector2i){g->player.speed, 0}))
            return;
    g->player.body.pos.x += g->player.speed;
    Set_Pos(g->player.body.sprite, g->player.body.pos.x, g->player.body.pos.y);
}

static void go_left(game_t *g)
{
    g->player.body.rect.top = 48;
    for (int i = 169; i < g->scene[g->curent_scene].nb_elem - 1; i++)
        if (combat_collision(g->player.body, g->scene[g->curent_scene].elem[i],
        (sfVector2i){-g->player.speed, 0}))
            return;
    g->player.body.pos.x -= g->player.speed;
    Set_Pos(g->player.body.sprite, g->player.body.pos.x, g->player.body.pos.y);
}

static void go_up(game_t *g)
{
    g->player.body.rect.top = 144;
    for (int i = 169; i < g->scene[g->curent_scene].nb_elem - 1; i++)
        if (combat_collision(g->player.body, g->scene[g->curent_scene].elem[i],
        (sfVector2i){0, -g->player.speed}))
            return;
    g->player.body.pos.y -= g->player.speed;
    Set_Pos(g->player.body.sprite, g->player.body.pos.x, g->player.body.pos.y);
}

static void go_down(game_t *g)
{
    g->player.body.rect.top = 0;
    for (int i = 169; i < g->scene[g->curent_scene].nb_elem - 1; i++)
        if (combat_collision(g->player.body, g->scene[g->curent_scene].elem[i],
        (sfVector2i){0, g->player.speed}))
            return;
    g->player.body.pos.y += g->player.speed;
    Set_Pos(g->player.body.sprite, g->player.body.pos.x, g->player.body.pos.y);
}

void combat_movement(game_t *g)
{
    if (Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyD))
        go_right(g);
    if (Key_Pressed(sfKeyLeft) || Key_Pressed(sfKeyQ))
        go_left(g);
    if (Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyZ))
        go_up(g);
    if (Key_Pressed(sfKeyDown) || Key_Pressed(sfKeyS))
        go_down(g);
    Set_Texture(g->player.body.sprite, NPC[17]);
    Set_Texture_Rect(g->scene[g->curent_scene].elem[0].sprite, g->scene[
    g->curent_scene].elem[0].rect);
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
}
