/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** menu headers
*/

#ifndef MENU_H_
    #define MENU_H_

scene_t init_menu(game_t *g);
void draw_menu(game_t *g);
void event_menu(game_t *g);
void anim_menu(game_t *g);
button_t *init_menu_button(sfRenderWindow *window);
interest_t *init_menu_interest(sfRenderWindow *window);
body_t *init_menu_elem(sfRenderWindow *window);

#endif /* !MENU_H_ */
