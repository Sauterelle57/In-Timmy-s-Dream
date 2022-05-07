/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_game
*/

#include "includes.h"
#include "combat.h"
void go_pause(game_t *g, int i);

static void check_action_fight(game_t *g)
{
    sfFloatRect player = Get_bounds(g->player.body.sprite);

    for (int i = 0; i < g->scene[g->curent_scene].nb_interest; i++)
        if (dist(g->player.body, g->scene[g->curent_scene].interest[i].body))
            g->scene[g->curent_scene].interest[i].on_click(g, i);
}

void event_combat(game_t *g)
{
    if (g->event.type == sfEvtClosed)
        quit_game(g, 0);
    if ((Key_Pressed(sfKeySpace) || Key_Pressed(sfKeyE)) &&
    g->t.sec - g->cooldown > 0.5) {
        check_action_fight(g);
        g->cooldown = g->t.sec;
    }
    if (Key_Pressed(sfKeyEscape) && g->t.sec - g->cooldown > 0.3) {
        go_pause(g, 0);
        g->cooldown = g->t.sec;
    }
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
}
