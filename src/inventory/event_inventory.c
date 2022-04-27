/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_inventory
*/

#include "includes.h"
#include "inventory.h"
#include "player.h"

static void check_action(game_t *g)
{
    sfFloatRect player = Get_bounds(g->player.body.sprite);

    for (int i = 0; i < g->scene[6].nb_interest; i++)
        if (Rect_Intersect(g->scene[6].interest[i].body, &player))
            g->scene[6].interest[i].on_click(g);
}

static void check_button(game_t *g, sfVector2i pos, sfVector2u size)
{
    static float tmp = 0.0;
    button_t button;

    g->t.sec = Get_Time(g->t.clock);
    for (int i = 0; i < g->scene[6].nb_button; i++) {
        button = g->scene[6].button[i];
        if (Mouse_Pressed(sfMouseLeft) && g->t.sec - tmp > 0.5 &&
        sfIntRect_contains(&(sfIntRect){button.body.pos.x, button.body.pos.y,
        button.size.x, button.size.y}, pos.x * (1920.0 / size.x), pos.y *
        (1080.0 / size.y))) {
            Set_Texture(button.body.sprite, BUTTON[button.png + 2]);
            button.on_click(g);
            tmp = g->t.sec;
        } else if (sfIntRect_contains(&(sfIntRect){button.body.pos.x,
        button.body.pos.y, button.size.x, button.size.y}, pos.x * (1920.0 /
        size.x), pos.y * (1080.0 / size.y))) {
            Set_Texture(button.body.sprite, BUTTON[button.png + 1]);
        } else
            Set_Texture(g->scene[6].button[i].body.sprite, BUTTON[button.png]);
    }
}

static void check_object(game_t *g, sfVector2i pos, sfVector2u size)
{
    static object_t object;

    for (int i = 0; i < NB_OBJ; i++) {
        object = g->player.inventory[i];
        if (sfIntRect_contains(&(sfIntRect){object.body.pos.x - 64,
        object.body.pos.y, 64, 64}, pos.x * (1920.0 / size.x), pos.y * (1080.0
        / size.y))) {
            sfText *description = create_text(25, (sfVector2f){pos.x + 50,
            pos.y - 10}, CHAR_OBJ[i], "other/button.ttf");
            Draw_Text(description);
        }
    }
}

void event_inventory(game_t *g)
{
    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        quit_game(g);
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
    check_object(g, Get_Mouse_Pos(), Get_Window_size());
    if (Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyDown) ||
    Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyLeft))
        inventory_movement(g);
}
