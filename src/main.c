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
#include "vampire.h" //scene 3
#include "ghost.h" //scene 4
#include "forest.h" //scene 5
#include "inventory.h" //scene 6

void game_loop(game_t *g, scene_t (*init_scene[7])(game_t *g))
{
    while (sfRenderWindow_isOpen(g->window)) {
        if (g->scene[g->curent_scene].charged == 0) {
            g->scene[g->curent_scene] = init_scene[g->curent_scene](g);
            sfMusic_pause(g->scene[g->previous_scene].scene_music);
            sfMusic_play(g->scene[g->curent_scene].scene_music);
            g->scene[g->curent_scene].charged = 1;
        }
        sfRenderWindow_clear(g->window, sfBlack);
        g->scene[g->curent_scene].anim(g);
        g->scene[g->curent_scene].draw(g);
        draw_cursor(g);
        sfRenderWindow_display(g->window);
        if (sfRenderWindow_pollEvent(g->window, &g->event))
            g->scene[g->curent_scene].event(g);
    }
}

int main(void)
{
    scene_t (*init_scene[7])(game_t *g) = {&init_game, &init_menu, &init_combat
    , &init_vampire, &init_ghost, &init_forest, &init_inventory};
    game_t game = create_game();

    game.previous_scene = 0;
    game.curent_scene = 0;
    game_loop(&game, init_scene);
    return (0);
}
