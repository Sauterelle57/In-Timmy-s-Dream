/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** anim_inventory
*/

#include "includes.h"
#include "inventory.h"

static void anim_interest(game_t *g)
{
    static int vector[8] = {144, 48, 144, 48, 144, 48, 144, 48};

    for (int i = 0; i < 4; i++) {
        g->scene[6].interest[i].body.rect.left += g->scene[6].interest[i].body.
        rect.left >= vector[i * 2] ? -vector[i * 2] : vector[i * 2 + 1];
        Set_Texture_Rect(g->scene[6].interest[i].body.sprite,
        g->scene[6].interest[i].body.rect);
    }
}

void anim_pixels(game_t *g)
{
    static int vector_x[8] = {0, 1, 2, 1, 0, -1, -2, -1};
    static int vector_y[8] = {-2, -1, 0, 1, 2, 1, 0, -1};
    sfVertex *pixel = sfVertexArray_getVertex(g->scene[g->curent_scene].array,
    0);

    for (int i = 0; i < NB_PIXELS; i++) {
        pixel = sfVertexArray_getVertex(g->scene[g->curent_scene].array, i);
        pixel->color.a -= 8;
        pixel->position.x += vector_x[i % 8];
        pixel->position.y += vector_y[i % 8];
    }
}

void anim_inventory(game_t *g)
{
    static float tmp = 0.0;
    static float tmp2 = 0.0;
    static float tmp3 = 0.0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp >= 0.15) {
        g->player.body.rect.left += g->player.body.rect.left > 143 ? -144 : 48;
        Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
        tmp = g->t.sec;
    }
    if (g->t.sec - tmp2 >= 0.05) {
        g->scene[6].elem[0].rect.left -= 5;
        Set_Texture_Rect(g->scene[6].elem[0].sprite, g->scene[6].elem[0].rect);
        tmp2 = g->t.sec;
    }
    if (sfVertexArray_getVertex(g->scene[g->curent_scene].array, 0)->color.a >
    7 && g->t.sec - tmp3 >= 0.03) {
        anim_pixels(g);
        tmp3 = g->t.sec;
    }
}
