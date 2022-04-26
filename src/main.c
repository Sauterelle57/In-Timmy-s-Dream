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
#include "my_loading.h" //scene 7
#include "cimetery.h" //scene 8

int game_loop(game_t *g, scene_t (*init_scene[9])(game_t *g))
{
    while (sfRenderWindow_isOpen(g->window)) {
        if (!g->scene[g->curent_scene].charged) {
            g->scene[g->curent_scene] = init_scene[g->curent_scene](g);
            sfMusic_pause(g->scene[g->previous_scene].scene_music);
            sfMusic_play(g->scene[g->curent_scene].scene_music);
            g->scene[g->curent_scene].charged = 1;
        }
        sfRenderWindow_clear(g->window, sfBlack);
        g->t.sec = Get_Time(g->t.clock);
        g->scene[g->curent_scene].anim(g);
        g->scene[g->curent_scene].draw(g);
        draw_cursor(g);
        if (sfRenderWindow_pollEvent(g->window, &g->event))
            g->scene[g->curent_scene].event(g);
        if (Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyDown) ||
        Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyLeft) || Key_Pressed(sfKeyZ
        ) || Key_Pressed(sfKeyS) || Key_Pressed(sfKeyD) || Key_Pressed(sfKeyQ))
            g->curent_scene == 2 ? combat_movement(g) : movement(g);
        else
            Set_Texture(g->player.body.sprite, NPC[16]);
        sfRenderWindow_display(g->window);
    }
    return (0);
}

int main(void)
{
    game_t game = create_game();
    scene_t (*init_scene[9])(game_t *g) = {&init_game, &init_menu, &init_combat
    , &init_vampire, &init_ghost, &init_forest, &init_inventory, &init_loading,
    &init_cimetery};

    game.previous_scene = 7;
    game.curent_scene = 7;
    return (game_loop(&game, init_scene));
}
