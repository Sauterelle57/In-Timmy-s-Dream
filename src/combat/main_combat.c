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
    int nb_elem = 377;
    interest_t *interest = init_combat_interest(g->window);
    int nb_interest = 0;
    sfMusic *scene_music = sfMusic_createFromFile("music/back.ogg");
    scene_t combat = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    maze_generation(23, 15);
    combat.draw = &draw_combat;
    combat.event = &event_combat;
    combat.anim = &anim_combat;
    sfMusic_setLoop(combat.scene_music, sfTrue);
    return (combat);
}

/*scene_t init_combat(game_t *g)
{
    button_t *buttons = init_combat_button(g->window);
    int nb_button = 0;
    body_t *elem = create_maze(elem);
    int nb_elem = 377;
    interest_t *interest = init_combat_interest(g->window);
    int nb_interest = 0;
    scene_t combat = {buttons, nb_button, elem, nb_elem, interest,
    nb_interest};

    maze_generation(23, 15);
    //elem[376] = create_body("other/font_invisible.png", (sfIntRect){0, 0, 4032, 3024},
    //(sfVector2f){-1700, -1300});
    combat.draw = &draw_combat;
    combat.event = &event_combat;
    combat.anim = &anim_combat;
    return (combat);
}
*/