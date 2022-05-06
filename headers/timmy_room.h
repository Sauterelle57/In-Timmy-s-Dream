/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** timmy_room
*/

#ifndef TIMMY_ROOM_H_
#define TIMMY_ROOM_H_

void anim_timmy_room(game_t *g);
void draw_timmy_room(game_t *g);
void event_timmy_room(game_t *g);
scene_t init_timmy_room(game_t *g);
body_t *init_timmy_room_elem(sfRenderWindow *window, int nb_elem);
interest_t *init_timmy_room_interest(sfRenderWindow *window, int nb);
button_t *init_timmy_room_button(sfRenderWindow *window, int nb_button);

#endif /* !TIMMY_ROOM_H_ */

