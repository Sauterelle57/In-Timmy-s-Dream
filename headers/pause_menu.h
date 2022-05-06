/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** pause_menu headers
*/

#ifndef pause_menu_H_
    #define pause_menu_H_

void draw_pause_menu(game_t *g);
void anim_pause_menu(game_t *g);
void event_pause_menu(game_t *g);
scene_t init_pause_menu(game_t *g);
body_t *init_pause_menu_elem(sfRenderWindow *window, int nb);
button_t *init_pause_menu_button(sfRenderWindow *window, int nb);
interest_t *init_pause_menu_interest(sfRenderWindow *window, int nb);

#endif /* !pause_menu_H_ */
