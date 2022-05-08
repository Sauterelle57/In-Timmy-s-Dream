/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** event_htp
*/

#include "includes.h"
#include "how_to_play.h"
#include "player.h"

button_t do_action_event(game_t *g, sfVector2i pos,
sfVector2u size, button_t button)
{
    sfSound_play(g->m.click);
    Set_Texture(button.body.sprite, BUTTON[button.png + 2]);
    button.on_click(g);
    g->cooldown = g->t.sec;
}
