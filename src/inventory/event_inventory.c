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
    button_t button;

    for (int i = 0; i < g->scene[6].nb_button; i++) {
        button = g->scene[6].button[i];
        if (Mouse_Pressed(sfMouseLeft) && g->t.sec - g->cooldown > 0.4 &&
        sfIntRect_contains(&(sfIntRect){button.body.pos.x, button.body.pos.y,
        button.size.x, button.size.y}, pos.x * (1920.0 / size.x), pos.y *
        (1080.0 / size.y))) {
            Set_Texture(button.body.sprite, BUTTON[button.png + 2]);
            button.on_click(g);
            g->scene[6].elem[1] = create_body("other/blank.png", (sfIntRect)
            {0, 0, 600, 200}, (sfVector2f){980, 770});
            g->cooldown = g->t.sec;
        }
        Set_Texture(g->scene[6].button[i].body.sprite, BUTTON[button.png]);
        if (sfIntRect_contains(&(sfIntRect){button.body.pos.x, button.body.pos.
        y, button.size.x, button.size.y}, pos.x * (1920.0 / size.x), pos.y *
        (1080.0 / size.y)))
            Set_Texture(button.body.sprite, BUTTON[button.png + 1]);
    }
}

static sfText *set_stat_obj(int i, sfVector2i pos)
{
    sfText *description;

    description = create_text(25, (sfVector2f){pos.x + 50,
    pos.y - 50}, CHAR_OBJ[i], "other/button.ttf");
    sfText_setColor(description, (sfColor){253, 230, 215, 255});
    sfText_setOutlineThickness(description, 2.5);
    sfText_setOutlineColor(description, (sfColor){0, 0, 0, 255});
    return (description);
}

static void check_object(game_t *g, sfVector2i pos, sfVector2u size)
{
    static object_t object;
    static float tmp = 0.0;

    for (int i = 0; i < NB_OBJ; i++) {
        object = g->player.inventory[i];
        if (sfIntRect_contains(&(sfIntRect){object.body.pos.x - 160,
        object.body.pos.y, 64, 64}, pos.x * (1920.0 / size.x), pos.y * (1080.0
        / size.y)) && g->player.inventory[i].own == 1)
            Draw_Text(set_stat_obj(i, pos));
        if (g->player.inventory[i].own == 1 && Mouse_Pressed(sfMouseLeft)
        && g->t.sec - tmp > 0.2 && sfIntRect_contains(&(sfIntRect){object.body.
        pos.x - 160, object.body.pos.y, 64, 64}, pos.x * (1920.0 / size.x), pos
        .y * (1080.0 / size.y))) {
            g->scene[6].elem[1] = create_body(STAT_OBJ[i], (sfIntRect)
            {0, 0, 600, 200}, (sfVector2f){980, 770});
            tmp = g->t.sec;
        }
    }
}

void event_inventory(game_t *g)
{
    if (g->event.type == sfEvtClosed)
        quit_game(g, 0);
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
    check_object(g, Get_Mouse_Pos(), Get_Window_size());
    if (Mouse_Pressed(sfMouseLeft) && g->t.sec - g->cooldown >= 0.15)
        manage_pixels(g, Get_Mouse_Pos());
    if (Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyD))
        g->player.body.rect.top = 96;
    if (Key_Pressed(sfKeyLeft) || Key_Pressed(sfKeyQ))
        g->player.body.rect.top = 48;
    if (Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyZ))
        g->player.body.rect.top = 144;
    if (Key_Pressed(sfKeyDown) || Key_Pressed(sfKeyS))
        g->player.body.rect.top = 0;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
}
