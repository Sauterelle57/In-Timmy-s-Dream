/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main
*/

#include "includes.h"
#include "game.h" //scene 0
#include "main_menu.h" //scene 1
#include "dialogue.h" //scene 2
#include "combat.h" //scene 3

void game_loop(game_t *g)
{
    while (sfRenderWindow_isOpen(g->window)) {
        sfRenderWindow_clear(g->window, sfBlack);
        g->scene[g->curent_scene].anim(g);
        g->scene[g->curent_scene].draw(g);
        Set_Pos(g->cursor.sprite, Get_Mouse_Pos().x, Get_Mouse_Pos().y);
        Draw_Sprite(g->cursor.sprite);
        if (sfRenderWindow_pollEvent(g->window, &g->event))
            g->scene[g->curent_scene].event(g);
        sfRenderWindow_display(g->window);
    }
}

int main(void)
{
    game_t game = create_game();
    scene_t s_game = init_game(&game);
    scene_t s_menu = init_menu(&game);
    game.scene[0] = s_game;
    game.scene[1] = s_menu;
    game.curent_scene = 0;
    game_loop(&game);
    return (0);
}
