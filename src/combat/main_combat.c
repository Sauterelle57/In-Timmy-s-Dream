/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_combat
*/

#include "includes.h"
#include "combat.h"

scene_t init_combat(game_t *g)
{
    static int charged = 0;
    button_t *buttons = init_combat_button(g->window);
    int nb_button = 1;
    body_t *elem = create_maze(elem, g);
    int nb_elem = 378;
    int nb_interest = nb_inter;
    interest_t *interest = init_combat_interest(nb_interest, elem);
    scene_t combat = {charged, buttons, nb_button, elem, nb_elem, interest,
    nb_interest};

    if (charged == 0) {
        combat.scene_music = sfMusic_createFromFile("music/disney.ogg");
        sfMusic_setLoop(combat.scene_music, sfTrue);
        sfMusic_setVolume(combat.scene_music, g->params[VOL]);
        charged = 1;
    }
    g->player.time = 0;
    combat.interest = interest;
    maze_generation(23, 15);
    combat.draw = &draw_combat;
    combat.event = &event_combat;
    combat.anim = &anim_combat;
    return (combat);
}
