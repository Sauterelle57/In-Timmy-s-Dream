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
    button_t *buttons = init_combat_button(g->window);
    int nb_button = 0;
    body_t *elem = create_maze(elem, g);
    int nb_elem = 378;
    sfMusic *scene_music = sfMusic_createFromFile("music/back.ogg");
    int nb_interest = 5;
    interest_t *interest = init_combat_interest(nb_interest, elem);
    scene_t combat = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    combat.interest = interest;
    maze_generation(23, 15);
    combat.draw = &draw_combat;
    combat.event = &event_combat;
    combat.anim = &anim_combat;
    sfMusic_setLoop(combat.scene_music, sfTrue);
    return (combat);
}
