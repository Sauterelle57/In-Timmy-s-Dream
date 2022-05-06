/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_vampire
*/

#include "includes.h"
#include "timmy_room.h"
#include "interest.h"

interest_t *init_timmy_room_interest(sfRenderWindow *window, int nb)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    interest_t *interest = malloc(sizeof(interest_t) * nb);

    interest[0] = create_interest("other/blue_block.png",
    (sfIntRect){0, 0, 100, 48}, (sfVector2f){680, 730}, &go_menu);
    return (interest);
}

scene_t init_timmy_room(game_t *g)
{
    int nb_button = 0;
    button_t *buttons = init_timmy_room_button(g->window, nb_button);
    int nb_elem = 12;
    body_t *elem = init_timmy_room_elem(g->window, nb_elem);
    int nb_interest = 1;
    interest_t *interest = init_timmy_room_interest(g->window, nb_interest);
    sfMusic *scene_music = sfMusic_createFromFile("music/The_Abyss.ogg");
    scene_t timmy_room = {0, buttons, nb_button, elem, nb_elem, interest,
    nb_interest, scene_music};

    timmy_room.draw = &draw_timmy_room;
    timmy_room.event = &event_timmy_room;
    timmy_room.anim = &anim_timmy_room;
    sfMusic_setLoop(timmy_room.scene_music, sfTrue);
    sfMusic_setVolume(timmy_room.scene_music, 100);
    return (timmy_room);
}
