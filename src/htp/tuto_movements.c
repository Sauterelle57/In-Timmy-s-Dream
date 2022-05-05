/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** player_mouvements
*/

#include "includes.h"
#include "combat.h"
int collision(body_t player, body_t elem, sfVector2i new_pos);

static void go_right(game_t *g)
{
    g->scene[12].interest[1].body.rect.top = 96;
    for (int i = 9; i < g->scene[g->curent_scene].nb_elem; i++)
        if (combat_collision(g->scene[12].interest[1].body, g->scene[
        g->curent_scene].elem[i], (sfVector2i){g->player.speed, 0}))
            return;
    g->scene[12].interest[1].body.pos.x += 10;
}

static void go_left(game_t *g)
{
    g->scene[12].interest[1].body.rect.top = 48;
    for (int i = 9; i < g->scene[g->curent_scene].nb_elem; i++)
        if (combat_collision(g->scene[12].interest[1].body, g->scene[
        g->curent_scene].elem[i], (sfVector2i){-g->player.speed, 0}))
            return;
    g->scene[12].interest[1].body.pos.x -= 10;
}

static void go_up(game_t *g)
{
    g->scene[12].interest[1].body.rect.top = 144;
    for (int i = 9; i < g->scene[g->curent_scene].nb_elem; i++)
        if (collision(g->scene[12].interest[1].body, g->scene[g->curent_scene].
        elem[i], (sfVector2i){0, -g->player.speed}))
            return;
    g->scene[12].interest[1].body.pos.y -= 10;
}

static void go_down(game_t *g)
{
    g->scene[12].interest[1].body.rect.top = 0;
    for (int i = 9; i < g->scene[g->curent_scene].nb_elem; i++)
        if (collision(g->scene[12].interest[1].body, g->scene[g->curent_scene].
        elem[i], (sfVector2i){0, g->player.speed}))
            return;
    g->scene[12].interest[1].body.pos.y += 10;
}

void tuto_movement(game_t *g)
{
    if (Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyD))
        go_right(g);
    if (Key_Pressed(sfKeyLeft) || Key_Pressed(sfKeyQ))
        go_left(g);
    if (Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyZ))
        go_up(g);
    if (Key_Pressed(sfKeyDown) || Key_Pressed(sfKeyS))
        go_down(g);
    Set_Pos(g->scene[12].interest[1].body.sprite, g->scene[12].interest[1].body
    .pos.x, g->scene[12].interest[1].body.pos.y);
    Set_Texture(g->scene[12].interest[1].body.sprite, NPC[17]);
    Set_Texture_Rect(g->scene[12].interest[1].body.sprite,
    g->scene[12].interest[1].body.rect);
}
