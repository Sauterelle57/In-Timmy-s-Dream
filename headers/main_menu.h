/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** menu headers
*/

#ifndef MENU_H_
    #define MENU_H_

void draw_menu(game_t *g);
void anim_menu(game_t *g);
void event_menu(game_t *g);
scene_t init_menu(game_t *g);
void go_menu(game_t *g, int i);
void manage_volume(game_t *game, int i);
void manage_framerate(game_t *g, int nb);
void manage_difficulty(game_t *g, int nb);
void charge_scene(game_t *g, int next_scene);
body_t *init_menu_elem(sfRenderWindow *window, int nb);
button_t *init_menu_button(sfRenderWindow *window, int nb);
interest_t *init_menu_interest(sfRenderWindow *window, int nb);

#endif /* !MENU_H_ */
