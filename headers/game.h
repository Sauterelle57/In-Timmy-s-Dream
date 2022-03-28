/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** game headers
*/

#ifndef GAME_H_
    #define GAME_H_

scene_t init_game(game_t *g);
void movement(game_t *g);
void draw_game(game_t *g);
void event_game(game_t *g);
void anim_game(game_t *g);
button_t *init_game_button(sfRenderWindow *window);
interest_t *init_game_interest(sfRenderWindow *window);
body_t *init_game_elem(sfRenderWindow *window);

#endif /* !GAME_H_ */
