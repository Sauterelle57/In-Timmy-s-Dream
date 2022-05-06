/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_vampire
*/

#include "includes.h"
#include "menu_lose.h"

void anim_menu_lose(game_t *g)
{
    return;
}

interest_t *init_lose_interest(sfRenderWindow *window, int nb)
{
    interest_t *interest = malloc(sizeof(interest_t) * nb);

    return (interest);
}

scene_t init_menu_lose(game_t *g)
{
    int nb_button = 2;
    button_t *buttons = init_lose_button(g->window, nb_button);
    int nb_elem = 1;
    body_t *elem = init_lose_elem(g->window, nb_elem);
    int nb_interest = 0;
    interest_t *interest = init_lose_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile("music/The_Abyss.ogg");
    scene_t menu_lose = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    menu_lose.draw = &draw_menu_lose;
    menu_lose.event = &event_menu_lose;
    menu_lose.anim = &anim_menu_lose;
    sfMusic_setLoop(menu_lose.scene_music, sfTrue);
    sfMusic_setVolume(menu_lose.scene_music, g->params[VOL]);
    return (menu_lose);
}
