/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_game
*/

#include "includes.h"
#include "combat.h"

static void check_action(game_t *g)
{
    sfFloatRect player = Get_bounds(g->player.body.sprite);

    for (int i = 0; i < g->scene[g->curent_scene].nb_interest; i++)
        if (Rect_Intersect(g->scene[g->curent_scene].interest[i].body,
        &player))
    g->scene[g->curent_scene].interest[i].on_click(g);
}

void event_combat(game_t *g)
{
    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        quit_game(g, 0);
    if (Key_Pressed(sfKeySpace) && g->t.sec - g->cooldown > 0.5) {
        check_action(g);
        g->cooldown = g->t.sec;
    }
    if (sfKeyboard_isKeyPressed(sfKeyP) && g->t.sec - g->t.pause > 0.3)
        pause_game(g);
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
}
