/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions_menu
*/

#include "includes.h"
#include "main_menu.h"

void draw_settings(game_t *g)
{
    for (int i = 0; i < g->scene[9].nb_elem; i++)
        Draw_Sprite(g->scene[9].elem[i].sprite);
    for (int i = 0; i < g->scene[9].nb_interest; i++)
        Draw_Sprite(g->scene[9].interest[i].body.sprite);
    for (int i = 0; i < g->scene[9].nb_button; i++) {
        Draw_Sprite(g->scene[9].button[i].body.sprite);
        sfRenderWindow_drawText(g->window, g->scene[9].button[i].text, NULL);
    }
    sfRenderWindow_drawVertexArray(g->window, g->scene[9].array, 0);
}

static void check_button(game_t *g, sfVector2i pos, sfVector2u size)
{
    button_t button;

    g->t.sec = Get_Time(g->t.clock);
    for (int i = 0; i < g->scene[9].nb_button; i++) {
        button = g->scene[9].button[i];
        if (Mouse_Pressed(sfMouseLeft) && g->t.sec - g->cooldown > 0.2 &&
        sfIntRect_contains(&(sfIntRect){button.body.pos.x, button.body.pos.y,
        button.size.x, button.size.y}, pos.x * (1920.0 / size.x), pos.y *
        (1080.0 / size.y))) {
            sfSound_play(g->m.click);
            Set_Texture(button.body.sprite, BUTTON[button.png + 2]);
            button.on_click(g, i);
            g->cooldown = g->t.sec;
        } else if (sfIntRect_contains(&(sfIntRect){button.body.pos.x,
        button.body.pos.y, button.size.x, button.size.y}, pos.x * (1920.0 /
        size.x), pos.y * (1080.0 / size.y))) {
            Set_Texture(button.body.sprite, BUTTON[button.png + 1]);
        } else
            Set_Texture(g->scene[9].button[i].body.sprite, BUTTON[button.png]);
    }
}

void event_settings(game_t *g)
{
    if (g->event.type == sfEvtClosed)
        quit_game(g, 0);
    if (Mouse_Pressed(sfMouseLeft))
        manage_pixels(g, Get_Mouse_Pos());
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
}

void anim_settings(game_t *g)
{
    static float tmp = 0.0;
    static float tmp2 = 0.0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp >= 0.04) {
        for (int i = 0; i < 8; i++) {
            g->scene[9].elem[i].rect.left += i;
            Set_Texture_Rect(g->scene[9].elem[i].sprite,
            g->scene[9].elem[i].rect);
        }
        tmp = g->t.sec;
    }
    if (sfVertexArray_getVertex(g->scene[g->curent_scene].array, 0)->color.a >
    7 && g->t.sec - tmp2 >= 0.03) {
        anim_pixels(g);
        tmp2 = g->t.sec;
    }
}
