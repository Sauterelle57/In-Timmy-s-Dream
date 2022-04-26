/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_game
*/

#include "includes.h"
#include "combat.h"

void event_combat(game_t *g)
{
    g->t.sec = Get_Time(g->t.clock);
    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        quit_game(g);
    if (Key_Pressed(sfKeySpace) && g->t.sec - g->cooldown > 0.5) {
        check_action(g);
        g->cooldown = g->t.sec;
    }
    if (sfKeyboard_isKeyPressed(sfKeyP) && g->t.sec - g->t.pause > 0.3)
        pause_game(g);
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
}
