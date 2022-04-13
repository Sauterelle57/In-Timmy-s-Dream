/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** forest
*/

#ifndef forest_H_
    #define forest_H_

void fonction(game_t *g);
void draw_forest(game_t *g);
void anim_forest(game_t *g);
void event_forest(game_t *g);
scene_t init_forest(game_t *g);
void forest_movement(game_t *g);
body_t *init_forest_elem(sfRenderWindow *window, int nb_elem);
button_t *init_forest_button(sfRenderWindow *window, int nb_button);
int forest_collision(body_t player, body_t elem, sfVector2i new_pos);
interest_t *init_forest_interest(sfRenderWindow *window, int nb_interest);

#endif /* !forest_H_ */
