/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions_game
*/

#include "includes.h"
#include "game.h"

void draw_game(game_t *g)
{
    for (int i = 0; i < g->scene[0].nb_elem; i++)
        Draw_Sprite(g->scene[0].elem[i].sprite);
    for (int i = 0; i < g->scene[0].nb_interest; i++)
        Draw_Sprite(g->scene[0].interest[i].body.sprite);
    for (int i = 0; i < g->scene[0].nb_button; i++)
        Draw_Sprite(g->scene[0].button[i].body.sprite);
    Draw_Sprite(g->player.body.sprite);
}

void event_game(game_t *g)
{
    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        sfRenderWindow_close(g->window);
    if (Key_Pressed(sfKeySpace))
        g->curent_scene = 1;
    Set_Texture(g->player.body.sprite, NPC[16]);
    if (Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyDown) ||
        Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyLeft))
            movement(g);
}

void anim_game(game_t *g)
{
    static float tmp = 0.0;
    static int vector[10] = {0, 0, 96, 32, 96, 32, 96, 32, 96, 32};

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp >= 0.15) {
        for (int i = 0; i < g->scene[0].nb_elem; i++) {
            g->scene[0].elem[i].rect.left += g->scene[0].elem[i].rect.left >=
            vector[i * 2] ? -vector[i * 2] : vector[i * 2 + 1];
            Set_Texture_Rect(g->scene[0].elem[i].sprite,
            g->scene[0].elem[i].rect);
        }
        g->player.body.rect.left += g->player.body.rect.left >= 96 ? -96 : 32;
        Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
        tmp = g->t.sec;
    }
}
