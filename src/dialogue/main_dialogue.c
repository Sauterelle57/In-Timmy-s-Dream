/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_dialogue
*/

#include "includes.h"
#include "dialogue.h"

scene_t init_dialogue(game_t *g)
{
    button_t *buttons = init_game_button(g->window);
    int nb_button = 2;
    body_t *elem = init_game_elem(g->window);
    int nb_elem = 2;
    interest_t *interest = init_game_interest(g->window);
    int nb_interest = 2;
    scene_t game = {buttons, nb_button, elem, nb_elem, interest,
    nb_interest};

    game.draw = &draw_dialogue;
    game.event = &event_dialogue;
    game.anim = &anim_dialogue;
    return (game);
}
