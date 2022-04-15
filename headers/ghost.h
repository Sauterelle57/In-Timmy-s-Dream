/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** ghost
*/

#ifndef ghost_H_
    #define ghost_H_

void example(game_t *g);
void fonction(game_t *g);
void draw_ghost(game_t *g);
void anim_ghost(game_t *g);
void event_ghost(game_t *g);
scene_t init_ghost(game_t *g);
void ghost_movement(game_t *g);
body_t *init_ghost_elem(sfRenderWindow *window, int nb_elem);
button_t *init_ghost_button(sfRenderWindow *window, int nb_button);
int ghost_collision(body_t player, body_t elem, sfVector2i new_pos);
interest_t *init_ghost_interest(sfRenderWindow *window, int nb_interest);

#endif /* !ghost_H_ */
