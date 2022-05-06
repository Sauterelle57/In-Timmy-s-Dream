/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_htp
*/

#include "includes.h"
#include "how_to_play.h"
#include "player.h"

static void tuto_interest(game_t *g)
{
    g->scene[g->curent_scene].elem[13] = create_body("other/hi.png",
    (sfIntRect){0, 0, 300, 100}, (sfVector2f){1300, 300});
}

static void check_button(game_t *g, sfVector2i pos, sfVector2u size)
{
    button_t button;

    g->t.sec = Get_Time(g->t.clock);
    for (int i = 0; i < g->scene[g->curent_scene].nb_button; i++) {
        button = g->scene[g->curent_scene].button[i];
        if (Mouse_Pressed(sfMouseLeft) && g->t.sec - g->cooldown > 0.5 &&
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
            Set_Texture(g->scene[g->curent_scene].button[i].body.sprite, BUTTON
            [button.png]);
    }
}

void manage_pixels(game_t *g, sfVector2i pos)
{
    sfVertexArray_clear(g->scene[g->curent_scene].array);
    for (int i = 0; i < NB_PIXELS; i++)
        add_pixel(g->scene[g->curent_scene].array, (sfVector2f){pos.x,
        pos.y}, (sfColor){255, 255, 10, 255});
}

static void event_htp_2(game_t *g)
{
    if (Key_Pressed(sfKeyA) && g->t.sec - g->cooldown >= 0.15) {
        g->player.speed = g->player.speed == SPEED ? SPEED + 5 : SPEED;
        g->cooldown = g->t.sec;
    }
    if (!Key_Pressed(sfKeyUp) || !Key_Pressed(sfKeyDown) ||
    !Key_Pressed(sfKeyRight) || !Key_Pressed(sfKeyLeft) || !Key_Pressed(sfKeyZ
    ) || !Key_Pressed(sfKeyS) || !Key_Pressed(sfKeyD) || !Key_Pressed(sfKeyQ))
        Set_Texture(g->scene[12].interest[1].body.sprite, NPC[16]);
}

void event_htp(game_t *g)
{
    if (g->event.type == sfEvtClosed)
        quit_game(g, 0);
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
    if (Mouse_Pressed(sfMouseLeft) && g->t.sec - g->cooldown >= 0.15)
        manage_pixels(g, Get_Mouse_Pos());
    if (((Key_Pressed(sfKeySpace) || Key_Pressed(sfKeyE))) && g->t.sec -
    g->cooldown >= 0.15)
        tuto_interest(g);
    if (Key_Pressed(sfKeyEnter) && g->t.sec - g->cooldown >= 0.15) {
        g->scene[g->curent_scene].elem[13] = create_body("other/blank.png",
        (sfIntRect){0, 0, 200, 100}, (sfVector2f){1300, 300});
        g->scene[g->curent_scene].elem[14] = create_body("other/blank.png",
        (sfIntRect){0, 0, 1917, 1076}, (sfVector2f){550, 600});
        Set_Scale(g->scene[g->curent_scene].elem[14].sprite, 0.5, 0.5);
    }
    event_htp_2(g);
}
