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
    static int y = 0;
    button_t *buttons = NULL;
    int nb_button = 0;
    int nb_elem = 378;
    body_t *elem = create_maze(elem, g);
    int nb_interest = nb_inter;
    interest_t *interest = init_combat_interest(nb_interest, elem);
    sfMusic *scene_music = sfMusic_createFromFile("music/disney.ogg");
    scene_t combat = {y, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    y = 1;
    g->player.time = 0;
    maze_generation(23, 15);
    combat.draw = &draw_combat;
    combat.event = &event_combat;
    combat.anim = &anim_combat;
    sfMusic_setLoop(combat.scene_music, sfTrue);
    sfMusic_setVolume(combat.scene_music, g->params[VOL]);
    return (combat);
}
