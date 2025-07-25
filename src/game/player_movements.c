/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** player_movements
*/

#include "includes.h"
#include "game.h"
#include "player.h"

static void go_right(game_t *g, int s, int nb_elem)
{
    g->player.body.rect.top = 96;
    for (int i = 2; i < nb_elem; i++)
        if (collision(g->player.body, g->scene[s].elem[i],
        (sfVector2i){g->player.speed, 0}))
            return;
    for (int i = 2; i < g->scene[s].nb_elem; i++) {
        g->scene[s].elem[i].pos.x -= g->player.speed;
        Set_Pos(g->scene[s].elem[i].sprite, g->scene[s].elem[i].pos.x,
        g->scene[s].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[s].nb_interest; i++) {
        g->scene[s].interest[i].body.pos.x -= g->player.speed;
        Set_Pos(g->scene[s].interest[i].body.sprite, g->scene[s].interest
        [i].body.pos.x, g->scene[s].interest[i].body.pos.y);
    }
    g->scene[s].elem[0].rect.left += g->player.speed;
    g->scene[s].elem[1].rect.left += g->player.speed;
}

static void go_left(game_t *g, int s, int nb_elem)
{
    g->player.body.rect.top = 48;
    for (int i = 2; i < nb_elem; i++)
        if (collision(g->player.body, g->scene[s].elem[i],
        (sfVector2i){-g->player.speed, 0}))
            return;
    for (int i = 2; i < g->scene[s].nb_elem; i++) {
        g->scene[s].elem[i].pos.x += g->player.speed;
        Set_Pos(g->scene[s].elem[i].sprite, g->scene[s].elem[i].pos.x,
        g->scene[s].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[s].nb_interest; i++) {
        g->scene[s].interest[i].body.pos.x += g->player.speed;
        Set_Pos(g->scene[s].interest[i].body.sprite, g->scene[s].interest
        [i].body.pos.x, g->scene[s].interest[i].body.pos.y);
    }
    g->scene[s].elem[0].rect.left -= g->player.speed;
    g->scene[s].elem[1].rect.left -= g->player.speed;
}

static void go_up(game_t *g, int s, int nb_elem)
{
    g->player.body.rect.top = 144;
    for (int i = 2; i < nb_elem; i++)
        if (collision(g->player.body, g->scene[s].elem[i],
        (sfVector2i){0, -g->player.speed}))
            return;
    for (int i = 2; i < g->scene[s].nb_elem; i++) {
        g->scene[s].elem[i].pos.y += g->player.speed;
        Set_Pos(g->scene[s].elem[i].sprite, g->scene[s].elem[i].pos.x,
        g->scene[s].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[s].nb_interest; i++) {
        g->scene[s].interest[i].body.pos.y += g->player.speed;
        Set_Pos(g->scene[s].interest[i].body.sprite, g->scene[s].interest
        [i].body.pos.x, g->scene[s].interest[i].body.pos.y);
    }
    g->scene[s].elem[0].rect.top -= g->player.speed;
    g->scene[s].elem[1].rect.top -= g->player.speed;
}

static void go_down(game_t *g, int s, int nb_elem)
{
    g->player.body.rect.top = 0;
    for (int i = 2; i < nb_elem; i++)
        if (collision(g->player.body, g->scene[s].elem[i],
        (sfVector2i){0, g->player.speed}))
            return;
    for (int i = 2; i < g->scene[s].nb_elem; i++) {
        g->scene[s].elem[i].pos.y -= g->player.speed;
        Set_Pos(g->scene[s].elem[i].sprite, g->scene[s].elem[i].pos.x,
        g->scene[s].elem[i].pos.y);
    }
    for (int i = 0; i < g->scene[s].nb_interest; i++) {
        g->scene[s].interest[i].body.pos.y -= g->player.speed;
        Set_Pos(g->scene[s].interest[i].body.sprite, g->scene[s].interest
        [i].body.pos.x, g->scene[s].interest[i].body.pos.y);
    }
    g->scene[s].elem[0].rect.top += g->player.speed;
    g->scene[s].elem[1].rect.top += g->player.speed;
}

void movement(game_t *g)
{
    int s = g->curent_scene;
    int nb_elem = s == 8 ? 32 : g->scene[s].nb_elem;

    if (Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyD))
        go_right(g, s, nb_elem);
    if (Key_Pressed(sfKeyLeft) || Key_Pressed(sfKeyQ))
        go_left(g, s, nb_elem);
    if (Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyZ))
        go_up(g, s, nb_elem);
    if (Key_Pressed(sfKeyDown) || Key_Pressed(sfKeyS))
        go_down(g, s, nb_elem);
    Set_Texture(g->player.body.sprite, NPC[17]);
    Set_Texture_Rect(g->scene[s].elem[0].sprite, g->scene[s].elem[0].rect);
    Set_Texture_Rect(g->scene[s].elem[1].sprite, g->scene[s].elem[1].rect);
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
}
