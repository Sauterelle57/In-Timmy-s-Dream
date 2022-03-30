/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** check_interest_on_click
*/

#include "includes.h"
#include "game.h"

static void check_action(game_t *g)
{
    sfVector2f size = {32, 50};
    sfFloatRect inter;

    for (int i = 0; i < g->scene[0].nb_interest; i++) {
        inter = sfSprite_getGlobalBounds(g->scene[0].interest[i].body.sprite);
        if (sfFloatRect_intersects(&(sfFloatRect){g->scene[0].interest[i].body.
        pos.x, g->scene[0].interest[i].body.pos.y, 32, 32}, &inter, 0))
            g->scene[0].interest[i].on_click(g);
    }
}

void event_game(game_t *g)
{
    static float cooldown = 0.0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->event.type == sfEvtClosed || Key_Pressed(sfKeyEscape))
        sfRenderWindow_close(g->window);
    if (g->t.sec - cooldown > 0.3) {
        if (Key_Pressed(sfKeySpace))
            check_action(g);
        if (Key_Pressed(sfKeyEnter))
            g->curent_scene = 1;
        cooldown = g->t.sec;
    }
    Set_Texture(g->player.body.sprite, NPC[16]);
    if (Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyDown) ||
    Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyLeft))
        movement(g);
}
