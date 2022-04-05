/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** game headers
*/

#ifndef GAME_H_
    #define GAME_H_

void movement(game_t *g);
void draw_game(game_t *g);
void anim_game(game_t *g);
void event_game(game_t *g);
scene_t init_game(game_t *g);
body_t *create_block(body_t *elem);
body_t *init_game_elem(sfRenderWindow *window);
button_t *init_game_button(sfRenderWindow *window);
interest_t *init_game_interest(sfRenderWindow *window);
int collision(body_t player, body_t elem, sfVector2i new_pos);

#endif /* !GAME_H_ */
