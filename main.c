/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main
*/

#include "includes.h"
#include "struct.h"
#include "define.h"
#include "create_prototypes.h"
#include "game.h"

int main(void)
{
    game_t game = create_game();
    scene_t s_game = init_game(&game);
    game.scene[0] = s_game;
    game_loop(&game, 0);
    return (0);
}

void game_loop(game_t *g, int i)
{
    while (sfRenderWindow_isOpen(g->window)) {
        sfRenderWindow_clear(g->window, sfBlack);
        g->scene[i].draw(g, i);
        Draw_Sprite(g->cursor.sprite);
        g->scene[i].anim(g, i);
        if (sfRenderWindow_pollEvent(g->window, &g->event))
            g->scene[i].event(g, i);;
        sfRenderWindow_display(g->window);
    }
}
