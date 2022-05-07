/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions_pause_menu
*/

#include "includes.h"
#include "pause_menu.h"
void go_back(game_t *g, int i);

void draw_pause_menu(game_t *g)
{
    for (int i = 0; i < g->scene[PAUSE].nb_elem; i++)
        Draw_Sprite(g->scene[PAUSE].elem[i].sprite);
    for (int i = 0; i < g->scene[PAUSE].nb_interest; i++)
        Draw_Sprite(g->scene[PAUSE].interest[i].body.sprite);
    for (int i = 0; i < g->scene[PAUSE].nb_button; i++) {
        Draw_Sprite(g->scene[PAUSE].button[i].body.sprite);
        sfRenderWindow_drawText(g->window, g->scene[PAUSE].button[i].text,
        NULL);
    }
    sfRenderWindow_drawVertexArray(g->window, g->scene[PAUSE].array, 0);
}

static void check_button(game_t *g, sfVector2i pos, sfVector2u size)
{
    button_t button;

    g->t.sec = Get_Time(g->t.clock);
    for (int i = 0; i < g->scene[PAUSE].nb_button; i++) {
        button = g->scene[PAUSE].button[i];
        if (Mouse_Pressed(sfMouseLeft) && g->t.sec - g->cooldown > 0.4 &&
        sfIntRect_contains(&(sfIntRect){button.body.pos.x, button.body.pos.y,
        button.size.x, button.size.y}, pos.x * (1920.0 / size.x), pos.y *
        (1080.0 / size.y))) {
            Set_Texture(button.body.sprite, BUTTON[button.png + 2]);
            button.on_click(g);
            g->cooldown = g->t.sec;
        } else if (sfIntRect_contains(&(sfIntRect){button.body.pos.x,
        button.body.pos.y, button.size.x, button.size.y}, pos.x * (1920.0 /
        size.x), pos.y * (1080.0 / size.y))) {
            Set_Texture(button.body.sprite, BUTTON[button.png + 1]);
        } else
            Set_Texture(g->scene[PAUSE].button[i].body.sprite,
            BUTTON[button.png]);
    }
}

void event_pause_menu(game_t *g)
{
    if (g->event.type == sfEvtClosed)
        quit_game(g, 0);
    if (Key_Pressed(sfKeyEscape) && g->t.sec - g->cooldown > 0.3) {
        go_back(g, 0);
        g->cooldown = g->t.sec;
    }
    if (Mouse_Pressed(sfMouseLeft))
        manage_pixels(g, Get_Mouse_Pos());
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
}

void anim_pause_menu(game_t *g)
{
    static float tmp = 0.0;
    static float tmp2 = 0.0;
    static int vector[4] = {3840, 1920, 96, 32};

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp >= 0.04) {
        for (int i = 0; i < 8; i++) {
            g->scene[PAUSE].elem[i].rect.left += i;
            Set_Texture_Rect(g->scene[PAUSE].elem[i].sprite,
            g->scene[PAUSE].elem[i].rect);
        }
        tmp = g->t.sec;
    }
    if (sfVertexArray_getVertex(g->scene[g->curent_scene].array, 0)->color.a >
    7 && g->t.sec - tmp2 >= 0.03) {
        anim_pixels(g);
        tmp2 = g->t.sec;
    }
}
