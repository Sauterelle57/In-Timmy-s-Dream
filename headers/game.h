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
body_t *create_block_6(body_t *elem);
body_t *create_block_11(body_t *elem);
void charge_scene(game_t *g, int next_scene);
button_t *init_game_button(sfRenderWindow *window, int nb_button);
interest_t *create_all_interests(interest_t *interest);
body_t *init_game_elem(sfRenderWindow *window, int nb_elem);
int collision(body_t player, body_t elem, sfVector2i new_pos);
interest_t *init_game_interest(sfRenderWindow *window, int nb_interest);

#endif /* !GAME_H_ */
