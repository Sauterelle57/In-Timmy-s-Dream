/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** menu_win
*/

#ifndef MENU_WIN_H_
    #define MENU_WIN_H_

void draw_menu_win(game_t *g);
void anim_menu_win(game_t *g);
void event_menu_win(game_t *g);
scene_t init_menu_win(game_t *g);
body_t *init_win_elem(sfRenderWindow *window, int nb_elem);
interest_t *init_win_interest(sfRenderWindow *window, int nb);
button_t *init_win_button(sfRenderWindow *window, int nb_button);

#endif /* !MENU_WIN_H_ */
