/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main_game
*/

#include "includes.h"
#include "game.h"

scene_t init_game(game_t *g)
{
    int nb_button = 2;
    button_t *buttons = init_game_button(g->window, nb_button);
    int nb_elem = 121;
    body_t *elem = init_game_elem(g->window, nb_elem);
    int nb_interest = 17;
    interest_t *interest = init_game_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile("music/back.ogg");
    scene_t game = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    game.draw = &draw_game;
    game.event = &event_game;
    game.anim = &anim_game;
    sfMusic_setLoop(game.scene_music, sfTrue);
    sfMusic_setVolume(game.scene_music, 0);
    return (game);
}
