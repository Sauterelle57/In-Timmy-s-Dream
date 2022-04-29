/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** vampire
*/

#ifndef VAMPIRE_H_
    #define VAMPIRE_H_

void draw_vampire(game_t *g);
void anim_vampire(game_t *g);
void event_vampire(game_t *g);
scene_t init_vampire(game_t *g);
body_t *init_vampire_elem(sfRenderWindow *window, int nb_elem);
button_t *init_vampire_button(sfRenderWindow *window, int nb_button);
int vampire_collision(body_t player, body_t elem, sfVector2i new_pos);
interest_t *init_vampire_interest(sfRenderWindow *window, int nb_interest);

#endif /* !VAMPIRE_H_ */
