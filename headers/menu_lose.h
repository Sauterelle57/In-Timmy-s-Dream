/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** menu_lose
*/

#ifndef MENU_LOSE_H_
#define MENU_LOSE_H_

void anim_menu_lose(game_t *g);
void draw_menu_lose(game_t *g);
void event_menu_lose(game_t *g);
scene_t init_menu_lose(game_t *g);
body_t *init_lose_elem(sfRenderWindow *window, int nb_elem);
interest_t *init_lose_interest(sfRenderWindow *window, int nb);
button_t *init_lose_button(sfRenderWindow *window, int nb_button);

#endif /* !MENU_LOSE_H_ */
