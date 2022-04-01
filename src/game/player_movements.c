/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** player_movements
*/

#include "includes.h"
#include "game.h"

static void go_right(game_t *g)
{
    g->player.body.rect.top = 96;
    if (g->scene[0].elem[0].rect.left >= 9600)
        return;
    for (int i = 1; i < g->scene[0].nb_elem; i++)
        if (collision(g->player.body, g->scene[0].elem[i],
        (sfVector2i){10, 0}))
            return;
    for (int i = 1; i < g->scene[0].nb_elem; i++) {
        g->scene[0].elem[i].pos.x -= 10;
        Set_Pos(g->scene[0].elem[i].sprite, g->scene[0].elem[i].pos.x,
        g->scene[0].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[0].nb_interest; i++) {
        g->scene[0].interest[i].body.pos.x -= 10;
        Set_Pos(g->scene[0].interest[i].body.sprite, g->scene[0].interest
        [i].body.pos.x, g->scene[0].interest[i].body.pos.y);
    }
    g->scene[0].elem[0].rect.left += 10;
}

static void go_left(game_t *g)
{
    g->player.body.rect.top = 48;
    if (g->scene[0].elem[0].rect.left <= 0)
        return;
    for (int i = 1; i < g->scene[0].nb_elem; i++)
        if (collision(g->player.body, g->scene[0].elem[i],
        (sfVector2i){-10, 0}))
            return;
    for (int i = 1; i < g->scene[0].nb_elem; i++) {
        g->scene[0].elem[i].pos.x += 10;
        Set_Pos(g->scene[0].elem[i].sprite, g->scene[0].elem[i].pos.x,
        g->scene[0].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[0].nb_interest; i++) {
        g->scene[0].interest[i].body.pos.x += 10;
        Set_Pos(g->scene[0].interest[i].body.sprite, g->scene[0].interest
        [i].body.pos.x, g->scene[0].interest[i].body.pos.y);
    }
    g->scene[0].elem[0].rect.left -= 10;
}

static void go_up(game_t *g)
{
    g->player.body.rect.top = 144;
    if (g->scene[0].elem[0].rect.top >= 5400)
        return;
    for (int i = 1; i < g->scene[0].nb_elem; i++)
        if (collision(g->player.body, g->scene[0].elem[i],
        (sfVector2i){0, -10}))
            return;
    for (int i = 1; i < g->scene[0].nb_elem; i++) {
        g->scene[0].elem[i].pos.y += 10;
        Set_Pos(g->scene[0].elem[i].sprite, g->scene[0].elem[i].pos.x,
        g->scene[0].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[0].nb_interest; i++) {
        g->scene[0].interest[i].body.pos.y += 10;
        Set_Pos(g->scene[0].interest[i].body.sprite, g->scene[0].interest
        [i].body.pos.x, g->scene[0].interest[i].body.pos.y);
    }
    g->scene[0].elem[0].rect.top -= 10;
}

static void go_down(game_t *g)
{
    g->player.body.rect.top = 0;
    if (g->scene[0].elem[0].rect.top <= 0)
        return;
    for (int i = 1; i < g->scene[0].nb_elem; i++)
        if (collision(g->player.body, g->scene[0].elem[i],
        (sfVector2i){0, 10}))
            return;
    for (int i = 1; i < g->scene[0].nb_elem; i++) {
        g->scene[0].elem[i].pos.y -= 10;
        Set_Pos(g->scene[0].elem[i].sprite, g->scene[0].elem[i].pos.x,
        g->scene[0].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[0].nb_interest; i++) {
        g->scene[0].interest[i].body.pos.y -= 10;
        Set_Pos(g->scene[0].interest[i].body.sprite, g->scene[0].interest
        [i].body.pos.x, g->scene[0].interest[i].body.pos.y);
    }
    g->scene[0].elem[0].rect.top += 10;
}

void movement(game_t *g)
{
    if (Key_Pressed(sfKeyRight))
        go_right(g);
    if (Key_Pressed(sfKeyLeft))
        go_left(g);
    if (Key_Pressed(sfKeyUp))
        go_up(g);
    if (Key_Pressed(sfKeyDown))
        go_down(g);
    Set_Texture(g->player.body.sprite, NPC[17]);
    Set_Texture_Rect(g->scene[0].elem[0].sprite, g->scene[0].elem[0].rect);
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
}
