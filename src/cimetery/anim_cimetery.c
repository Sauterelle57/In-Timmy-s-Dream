/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** anim_cimetery
*/

#include "includes.h"
#include "cimetery.h"
#include "player.h"
void go_room(game_t *g, int i);

static void anim_interest(game_t *g)
{
    static int vector[20] = {144, 48, 144, 48, 144, 48, 144, 48, 144, 48, 144,
    48, 144, 48, 144, 48, 144, 48, 384, 128};

    for (int i = 0; i < 10; i++) {
        i += i == 4 ? 1 : 0;
        g->scene[8].interest[i].body.rect.left += g->scene[8].interest[i].body.
        rect.left >= vector[i * 2] ? -vector[i * 2] : vector[i * 2 + 1];
        Set_Texture_Rect(g->scene[8].interest[i].body.sprite,
        g->scene[8].interest[i].body.rect);
    }
}

static sfVertexArray *anim_particules(sfVertexArray *array)
{
    int len_array = sfVertexArray_getVertexCount(array);

    for (int i = 0; i < len_array; i++) {
        sfVertex *pixel = sfVertexArray_getVertex(array, i);
        pixel->position.x -= rand() % 2;
        pixel->position.y += rand() % 2;
        if (pixel->position.x < 0) {
            pixel->position.x = rand() % 50 + 1870;
            pixel->position.y = rand() % 1080;
        }
        if (pixel->position.y > 1080) {
            pixel->position.x = rand() % 1920;
            pixel->position.y = rand() % 50;
        }
    }
    return (array);
}

void anim_cimetery(game_t *g)
{
    static float tmp = 0.0;
    static float tmp2 = 0.0;
    float delay_player = g->player.speed == SPEED ? 0.15 : 0.08;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp >= 0.15) {
        anim_interest(g);
        tmp = g->t.sec;
    }
    if (g->t.sec - tmp2 >= delay_player) {
        g->player.body.rect.left += g->player.body.rect.left > 143 ? -144 : 48;
        Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
        tmp2 = g->t.sec;
    }
    g->scene[8].array = anim_particules(g->scene[8].array);
    if (g->player.lvl == 9) {
        g->scene[8].interest[9].on_click = check_dialogue;
        Set_Texture(g->scene[8].interest[9].body.sprite, GRIM[0]);
    } else if (g->player.lvl == 10)
        g->scene[8].interest[4].on_click = go_room;
}
