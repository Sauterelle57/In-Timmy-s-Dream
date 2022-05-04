/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions_menu
*/

#include "includes.h"
#include "main_menu.h"

void draw_menu(game_t *g)
{
    for (int i = 0; i < g->scene[1].nb_elem; i++)
        Draw_Sprite(g->scene[1].elem[i].sprite);
    for (int i = 0; i < g->scene[1].nb_interest; i++)
        Draw_Sprite(g->scene[1].interest[i].body.sprite);
    for (int i = 0; i < g->scene[1].nb_button; i++) {
        Draw_Sprite(g->scene[1].button[i].body.sprite);
        sfRenderWindow_drawText(g->window, g->scene[1].button[i].text, NULL);
    }
}

static void check_button(game_t *g, sfVector2i pos, sfVector2u size)
{
    button_t button;

    g->t.sec = Get_Time(g->t.clock);
    for (int i = 0; i < g->scene[1].nb_button; i++) {
        button = g->scene[1].button[i];
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
            Set_Texture(g->scene[1].button[i].body.sprite, BUTTON[button.png]);
    }
}

void event_menu(game_t *g)
{
    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        quit_game(g, 0);
    if (Key_Pressed(sfKeyLeft))
        my_printf("Key Left pressed\n");
    if (Key_Pressed(sfKeyRight))
        my_printf("Key Right pressed\n");
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
}

void anim_menu(game_t *g)
{
    static float tmp = 0.0;
    static int vector[4] = {3840, 1920, 96, 32};

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp >= 0.04) {
        for (int i = 0; i < g->scene[1].nb_elem; i++) {
            g->scene[1].elem[i].rect.left += i;
            Set_Texture_Rect(g->scene[1].elem[i].sprite,
            g->scene[1].elem[i].rect);
        }
        tmp = g->t.sec;
    }
}
