/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main
*/

#include "includes.h"
#include "game.h" //scene 0
#include "main_menu.h" //scene 1
#include "combat.h" //scene 2

void game_loop(game_t *g)
{
    sfVector2u size;

    while (sfRenderWindow_isOpen(g->window)) {
        size = Get_Window_size();
        sfRenderWindow_clear(g->window, sfBlack);
        g->scene[g->curent_scene].anim(g);
        g->scene[g->curent_scene].draw(g);
        Set_Pos(g->cursor.sprite, Get_Mouse_Pos().x * (1920.0 / size.x),
        Get_Mouse_Pos().y * (1080.0 / size.y));
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
    scene_t s_combat = init_combat(&game);
    game.scene[0] = s_game;
    game.scene[1] = s_menu;
    game.scene[2] = s_combat;
    game.curent_scene = 0;
    game_loop(&game);
    return (0);
}
