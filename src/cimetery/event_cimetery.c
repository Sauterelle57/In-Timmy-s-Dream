/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_cimetery
*/

#include "includes.h"
#include "cimetery.h"
#include "player.h"
void go_pause(game_t *g, int i);

void set_mausoleum(game_t *g, int tmp, sfVector2f pos)
{
    char *text[2] = {"map/mausoleum.png", "map/mausoleum3d.png"};

    for (int i = 0; i < 2; i += 4) {
        g->scene[8].elem[tmp + 31] = create_body(text[i],
        (sfIntRect){0, 0, 96, 95}, pos);
        Set_Scale(g->scene[8].elem[tmp + 31].sprite, 1.5, 1.5);
    }
}

static void check_skeleton(game_t *g, int i)
{
    if (i == 0 && g->player.lvl < 9 && g->skeleton_win[0] == 0) {
        g->warning = 1;
        g->skeleton_win[0] = 1;
    } else if (i == 1 && g->player.lvl < 9 && g->skeleton_win[1] == 0) {
        g->warning = 1;
        g->skeleton_win[1] = 2;
    }
    if (i == 2 && g->player.lvl < 9 && g->skeleton_win[2] == 0) {
        g->warning = 1;
        g->skeleton_win[2] = 3;
    } else if (i == 3 && g->player.lvl < 9 && g->skeleton_win[3] == 0) {
        g->warning = 1;
        g->skeleton_win[3] = 4;
    }
}

static void check_action_cimetery(game_t *g)
{
    sfFloatRect player = Get_bounds(g->player.body.sprite);

    for (int i = 0; i < g->scene[8].nb_interest; i++)
        if (Rect_Intersect(g->scene[8].interest[i].body, &player)) {
            my_printf("scene %d -> %i\n", g->curent_scene, i);
            check_skeleton(g, i);
            g->scene[8].interest[i].on_click(g, g->scene[8].interest[i].line);
            return;
        }
}

static void check_button(game_t *g, sfVector2i pos, sfVector2u size)
{
    button_t button;

    g->t.sec = Get_Time(g->t.clock);
    for (int i = 0; i < g->scene[8].nb_button; i++) {
        button = g->scene[8].button[i];
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
            Set_Texture(g->scene[8].button[i].body.sprite, BUTTON[button.png]);
    }
}

void event_cimetery(game_t *g)
{
    g->t.sec = Get_Time(g->t.clock);
    if (g->event.type == sfEvtClosed)
        quit_game(g, 0);
    if ((Key_Pressed(sfKeySpace) || Key_Pressed(sfKeyE)) && g->t.sec -
    g->cooldown > 0.3) {
        check_action_cimetery(g);
        g->cooldown = g->t.sec;
    }
    if (Key_Pressed(sfKeyEscape) && g->t.sec - g->cooldown > 0.3) {
        go_pause(g, 0);
        g->cooldown = g->t.sec;
    }
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
    if (Key_Pressed(sfKeyA) && g->t.sec - g->cooldown >= 0.15) {
        g->player.speed = g->player.speed == SPEED ? SPEED + 5 : SPEED;
        g->cooldown = g->t.sec;
    }
}
