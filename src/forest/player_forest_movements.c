/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** player_mouvement_forest
*/

#include "includes.h"
#include "forest.h"

static void go_right(game_t *g)
{
    g->player.body.rect.top = 96;
    if (g->scene[5].elem[0].rect.left >= 7680)
        return;
    for (int i = 2; i < g->scene[5].nb_elem; i++)
        if (forest_collision(g->player.body, g->scene[5].elem[i],
        (sfVector2i){10, 0}))
            return;
    for (int i = 2; i < g->scene[5].nb_elem; i++) {
        g->scene[5].elem[i].pos.x -= 10;
        Set_Pos(g->scene[5].elem[i].sprite, g->scene[5].elem[i].pos.x,
        g->scene[5].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[5].nb_interest; i++) {
        g->scene[5].interest[i].body.pos.x -= 10;
        Set_Pos(g->scene[5].interest[i].body.sprite, g->scene[5].interest
        [i].body.pos.x, g->scene[5].interest[i].body.pos.y);
    }
    g->scene[5].elem[0].rect.left += 10;
    g->scene[5].elem[1].rect.left += 10;
}

static void go_left(game_t *g)
{
    g->player.body.rect.top = 48;
    if (g->scene[5].elem[0].rect.left <= -960)
        return;
    for (int i = 2; i < g->scene[5].nb_elem; i++)
        if (forest_collision(g->player.body, g->scene[5].elem[i],
        (sfVector2i){-10, 0}))
            return;
    for (int i = 2; i < g->scene[5].nb_elem; i++) {
        g->scene[5].elem[i].pos.x += 10;
        Set_Pos(g->scene[5].elem[i].sprite, g->scene[5].elem[i].pos.x,
        g->scene[5].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[5].nb_interest; i++) {
        g->scene[5].interest[i].body.pos.x += 10;
        Set_Pos(g->scene[5].interest[i].body.sprite, g->scene[5].interest
        [i].body.pos.x, g->scene[5].interest[i].body.pos.y);
    }
    g->scene[5].elem[0].rect.left -= 10;
    g->scene[5].elem[1].rect.left -= 10;
}

static void go_up(game_t *g)
{
    g->player.body.rect.top = 144;
    if (g->scene[5].elem[0].rect.top >= 4320)
        return;
    for (int i = 2; i < g->scene[5].nb_elem; i++)
        if (forest_collision(g->player.body, g->scene[5].elem[i],
        (sfVector2i){0, -10}))
            return;
    for (int i = 2; i < g->scene[5].nb_elem; i++) {
        g->scene[5].elem[i].pos.y += 10;
        Set_Pos(g->scene[5].elem[i].sprite, g->scene[5].elem[i].pos.x,
        g->scene[5].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[5].nb_interest; i++) {
        g->scene[5].interest[i].body.pos.y += 10;
        Set_Pos(g->scene[5].interest[i].body.sprite, g->scene[5].interest
        [i].body.pos.x, g->scene[5].interest[i].body.pos.y);
    }
    g->scene[5].elem[0].rect.top -= 10;
    g->scene[5].elem[1].rect.top -= 10;
}

static void go_down(game_t *g)
{
    g->player.body.rect.top = 0;
    if (g->scene[5].elem[0].rect.top <= -540)
        return;
    for (int i = 2; i < g->scene[5].nb_elem; i++)
        if (forest_collision(g->player.body, g->scene[5].elem[i],
        (sfVector2i){0, 10}))
            return;
    for (int i = 2; i < g->scene[5].nb_elem; i++) {
        g->scene[5].elem[i].pos.y -= 10;
        Set_Pos(g->scene[5].elem[i].sprite, g->scene[5].elem[i].pos.x,
        g->scene[5].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[5].nb_interest; i++) {
        g->scene[5].interest[i].body.pos.y -= 10;
        Set_Pos(g->scene[5].interest[i].body.sprite, g->scene[5].interest
        [i].body.pos.x, g->scene[5].interest[i].body.pos.y);
    }
    g->scene[5].elem[0].rect.top += 10;
    g->scene[5].elem[1].rect.top += 10;
}

void forest_movement(game_t *g)
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
    Set_Texture_Rect(g->scene[5].elem[0].sprite, g->scene[5].elem[0].rect);
    Set_Texture_Rect(g->scene[5].elem[1].sprite, g->scene[5].elem[1].rect);
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
}
