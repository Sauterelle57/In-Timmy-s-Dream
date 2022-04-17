/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** loading
*/

#ifndef my_loading_H_
    #define my_loading_H_

void draw_loading(game_t *g);
void anim_loading(game_t *g);
void event_loading(game_t *g);
scene_t init_loading(game_t *g);
body_t *init_loading_elem(sfRenderWindow *window, int nb_elem);
button_t *init_loading_button(sfRenderWindow *window, int nb_button);
interest_t *init_loading_interest(sfRenderWindow *window, int nb_interest);

#endif /* !my_loading_H_ */
