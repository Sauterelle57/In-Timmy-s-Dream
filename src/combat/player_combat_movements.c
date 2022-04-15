/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** player_mouvements
*/


/*
** EPITECH PROJECT, 2022
** PRG
** File description:
** player_movements
*/

#include "includes.h"
#include "combat.h"

static void go_right(game_t *g)
{
    g->player.body.rect.top = 96;
    for (int i = 168; i < g->scene[2].nb_elem; i++)
        if (combat_collision(g->player.body, g->scene[2].elem[i],
        (sfVector2i){10, 0}))
            return;
    g->player.body.pos.x += 10;
    Set_Pos(g->player.body.sprite, g->player.body.pos.x, g->player.body.pos.y);
}

static void go_left(game_t *g)
{
    g->player.body.rect.top = 48;
    for (int i = 168; i < g->scene[2].nb_elem; i++)
        if (combat_collision(g->player.body, g->scene[2].elem[i],
        (sfVector2i){-10, 0}))
            return;
    g->player.body.pos.x -= 10;
    Set_Pos(g->player.body.sprite, g->player.body.pos.x, g->player.body.pos.y);
}

static void go_up(game_t *g)
{
    g->player.body.rect.top = 144;
    for (int i = 168; i < g->scene[2].nb_elem; i++)
        if (combat_collision(g->player.body, g->scene[2].elem[i],
        (sfVector2i){0, -10}))
            return;
    g->player.body.pos.y -= 10;
    Set_Pos(g->player.body.sprite, g->player.body.pos.x, g->player.body.pos.y);
}

static void go_down(game_t *g)
{
    g->player.body.rect.top = 0;
    for (int i = 168; i < g->scene[2].nb_elem; i++)
        if (combat_collision(g->player.body, g->scene[2].elem[i],
        (sfVector2i){0, 10}))
            return;
    g->player.body.pos.y += 10;
    Set_Pos(g->player.body.sprite, g->player.body.pos.x, g->player.body.pos.y);
}

void combat_movement(game_t *g)
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
    Set_Texture_Rect(g->scene[2].elem[0].sprite, g->scene[2].elem[0].rect);
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
}
