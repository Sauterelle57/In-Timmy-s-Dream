/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_menu_win
*/

#include "includes.h"
#include "menu_win.h"

void anim_menu_win(game_t *g)
{
    return;
}

interest_t *init_win_interest(sfRenderWindow *window, int nb)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    interest_t *interest = malloc(sizeof(interest_t) * nb);

    return (interest);
}

scene_t init_menu_win(game_t *g)
{
    int nb_button = 2;
    button_t *buttons = init_win_button(g->window, nb_button);
    int nb_elem = 1;
    body_t *elem = init_win_elem(g->window, nb_elem);
    int nb_interest = 0;
    interest_t *interest = init_win_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile("music/The_Abyss.ogg");
    scene_t menu_lose = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    menu_lose.draw = &draw_menu_win;
    menu_lose.event = &event_menu_win;
    menu_lose.anim = &anim_menu_win;
    sfMusic_setLoop(menu_lose.scene_music, sfTrue);
    sfMusic_setVolume(menu_lose.scene_music, 100);
    return (menu_lose);
}
