/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** anim_forest
*/

#include "includes.h"
#include "forest.h"
#include "player.h"

static void anim_interest(game_t *g)
{
    static int vector[8] = {144, 48, 144, 48, 144, 48, 144, 48};

    for (int i = 0; i < 4; i++) {
        g->scene[5].interest[i].body.rect.left += g->scene[5].interest[i].body.
        rect.left >= vector[i * 2] ? -vector[i * 2] : vector[i * 2 + 1];
        Set_Texture_Rect(g->scene[5].interest[i].body.sprite,
        g->scene[5].interest[i].body.rect);
    }
}

static void anim_particules(sfVertexArray *array)
{
    int len_array = sfVertexArray_getVertexCount(array);

    for (int i = 0; i < len_array; i++) {
        sfVertex *pixel = sfVertexArray_getVertex(array, i);
        if (pixel->position.x > 1920) {
            pixel->position.x = rand() % 50;
            pixel->position.y = rand() % 1080;
        }
        if (pixel->position.x < 0) {
            pixel->position.x = rand() % 50 + 1870;
            pixel->position.y = rand() % 1080;
        }
        if (pixel->position.y > 1080) {
            pixel->position.x = rand() % 1920;
            pixel->position.y = rand() % 50;
        }
        if (pixel->position.y < 0) {
            pixel->position.x = rand() % 1920;
            pixel->position.y = rand() % 50 + 1030;
        } else {
            int a = rand() % 2 == 0 ? -1 : 1;
            pixel->position.x = a * 2;
            pixel->position.y = a * 2;
        }
    }
}

void anim_forest(game_t *g)
{
    static float tmp = 0.0;
    static float tmp2 = 0.0;
    float delay_player = g->player.speed == SPEED ? 0.15 : 0.08;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp >= 0.15) {
        anim_interest(g);
        tmp = g->t.sec;
    }
    anim_particules(g->scene[g->curent_scene].array);
    if (g->t.sec - tmp2 >= delay_player) {
        g->player.body.rect.left += g->player.body.rect.left >= 144 ? -144 :
        48;
        Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
        tmp2 = g->t.sec;
    }
}
