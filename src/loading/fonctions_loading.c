/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions_loading
*/

#include "includes.h"
#include "interest.h"
scene_t init_game(game_t *g);

static void draw_transition(game_t *g, int sens)
{
    float tmp = 0.0;
    int a = sens == 1 ? 255 : 0;
    sfRectangleShape *rect = sfRectangleShape_create();

    sfRectangleShape_setSize(rect, (sfVector2f){1920, 1080});
    while ((sens == 1 && a > 0) || (sens == 0 && a < 255)) {
        g->t.sec = Get_Time(g->t.clock);
        if (g->t.sec - tmp >= 0.05) {
            a = sens == 1 ? a - 5 : a + 10;
            tmp = g->t.sec;
        }
        sfRenderWindow_clear(g->window, sfBlack);
        Draw_Sprite(g->scene[7].elem[0].sprite);
        sfRectangleShape_setFillColor(rect, (sfColor){0, 0, 0, a});
        sfRenderWindow_drawRectangleShape(g->window, rect, 0);
        sfRenderWindow_display(g->window);
    }
}

void draw_loading(game_t *g)
{
    static int transition = 0;

    if (transition == 0) {
        draw_transition(g, 1);
        transition = 1;
    }
}

void event_loading(game_t *g)
{
    static int loading_game = 0;
    static float tmp = 0.0;

    if (g->event.type == sfEvtClosed)
        quit_game(g);
    g->t.sec = Get_Time(g->t.clock);
    if (loading_game == 0) {
        loading_game = 1;
        g->scene[0] = init_game(g);
        g->scene[0].charged = 1;
    }
    if (g->scene[0].charged == 1 && g->t.sec - tmp >= 1) {
        draw_transition(g, 0);
        go_game(g);
    }
}

void anim_loading(game_t *g)
{
    return;
}
