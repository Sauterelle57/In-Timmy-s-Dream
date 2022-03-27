/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** menu headers
*/

#ifndef MENU_H_
    #define MENU_H_

button_t *init_menu_button(sfRenderWindow *window);
button_t *init_menu_interest(sfRenderWindow *window);
button_t *init_menu_elem(sfRenderWindow *window);
void draw_menu(game_t *g);
void event_menu(game_t *g);
void anim_menu(game_t *g);

#endif /* !MENU_H_ */
