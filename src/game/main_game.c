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
    char *music = g->troll == 1 ? "music/Home.ogg" : "music/rickroll.ogg";
    int nb_button = 2;
    button_t *buttons = init_game_button(g->window, nb_button);
    int nb_elem = 134;
    body_t *elem = init_game_elem(g->window, nb_elem);
    int nb_interest = 19;
    interest_t *interest = init_game_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile(music);
    scene_t game = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    game.draw = &draw_game;
    game.event = &event_game;
    game.anim = &anim_game;
    sfMusic_setLoop(game.scene_music, sfTrue);
    sfMusic_setVolume(game.scene_music, g->params[VOL]);
    return (game);
}
