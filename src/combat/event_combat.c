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
        sfRenderWindow_close(g->window);
    g->t.sec = Get_Time(g->t.clock);
    if (Key_Pressed(sfKeySpace) && g->t.sec - g->cooldown > 0.5) {
        check_action(g);
        g->cooldown = g->t.sec;
    }
    check_button(g, Get_Mouse_Pos(), Get_Window_size());
    if (Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyDown) ||
    Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyLeft))
        combat_movement(g);
    else
        Set_Texture(g->player.body.sprite, NPC[16]);
}
