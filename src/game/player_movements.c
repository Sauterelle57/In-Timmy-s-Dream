/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** player_movements
*/

#include "includes.h"
#include "game.h"

static void go_right(game_t *g, int s)
{
    g->player.body.rect.top = 96;
    for (int i = 2; i < g->scene[s].nb_elem; i++)
        if (collision(g->player.body, g->scene[s].elem[i],
        (sfVector2i){10, 0}))
            return;
    for (int i = 2; i < g->scene[s].nb_elem; i++) {
        g->scene[s].elem[i].pos.x -= 10;
        Set_Pos(g->scene[s].elem[i].sprite, g->scene[s].elem[i].pos.x,
        g->scene[s].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[s].nb_interest; i++) {
        g->scene[s].interest[i].body.pos.x -= 10;
        Set_Pos(g->scene[s].interest[i].body.sprite, g->scene[s].interest
        [i].body.pos.x, g->scene[s].interest[i].body.pos.y);
    }
    g->scene[s].elem[0].rect.left += 10;
    g->scene[s].elem[1].rect.left += 10;
}

static void go_left(game_t *g, int s)
{
    g->player.body.rect.top = 48;
    for (int i = 2; i < g->scene[s].nb_elem; i++)
        if (collision(g->player.body, g->scene[s].elem[i],
        (sfVector2i){-10, 0}))
            return;
    for (int i = 2; i < g->scene[s].nb_elem; i++) {
        g->scene[s].elem[i].pos.x += 10;
        Set_Pos(g->scene[s].elem[i].sprite, g->scene[s].elem[i].pos.x,
        g->scene[s].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[s].nb_interest; i++) {
        g->scene[s].interest[i].body.pos.x += 10;
        Set_Pos(g->scene[s].interest[i].body.sprite, g->scene[s].interest
        [i].body.pos.x, g->scene[s].interest[i].body.pos.y);
    }
    g->scene[s].elem[0].rect.left -= 10;
    g->scene[s].elem[1].rect.left -= 10;
}

static void go_up(game_t *g, int s)
{
    g->player.body.rect.top = 144;
    for (int i = 2; i < g->scene[s].nb_elem; i++)
        if (collision(g->player.body, g->scene[s].elem[i],
        (sfVector2i){0, -10}))
            return;
    for (int i = 2; i < g->scene[s].nb_elem; i++) {
        g->scene[s].elem[i].pos.y += 10;
        Set_Pos(g->scene[s].elem[i].sprite, g->scene[s].elem[i].pos.x,
        g->scene[s].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[s].nb_interest; i++) {
        g->scene[s].interest[i].body.pos.y += 10;
        Set_Pos(g->scene[s].interest[i].body.sprite, g->scene[s].interest
        [i].body.pos.x, g->scene[s].interest[i].body.pos.y);
    }
    g->scene[s].elem[0].rect.top -= 10;
    g->scene[s].elem[1].rect.top -= 10;
}

static void go_down(game_t *g, int s)
{
    g->player.body.rect.top = 0;
    for (int i = 2; i < g->scene[s].nb_elem; i++)
        if (collision(g->player.body, g->scene[s].elem[i],
        (sfVector2i){0, 10}))
            return;
    for (int i = 2; i < g->scene[s].nb_elem; i++) {
        g->scene[s].elem[i].pos.y -= 10;
        Set_Pos(g->scene[s].elem[i].sprite, g->scene[s].elem[i].pos.x,
        g->scene[s].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[s].nb_interest; i++) {
        g->scene[s].interest[i].body.pos.y -= 10;
        Set_Pos(g->scene[s].interest[i].body.sprite, g->scene[s].interest
        [i].body.pos.x, g->scene[s].interest[i].body.pos.y);
    }
    g->scene[s].elem[0].rect.top += 10;
    g->scene[s].elem[1].rect.top += 10;
}

void movement(game_t *g)
{
    int s = g->curent_scene;

    if (Key_Pressed(sfKeyRight))
        go_right(g, s);
    if (Key_Pressed(sfKeyLeft))
        go_left(g, s);
    if (Key_Pressed(sfKeyUp))
        go_up(g, s);
    if (Key_Pressed(sfKeyDown))
        go_down(g, s);
    Set_Texture(g->player.body.sprite, NPC[17]);
    Set_Texture_Rect(g->scene[s].elem[0].sprite, g->scene[s].elem[0].rect);
    Set_Texture_Rect(g->scene[s].elem[1].sprite, g->scene[s].elem[1].rect);
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
}
