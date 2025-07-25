/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** cimetery
*/

#ifndef cimetery_H_
    #define cimetery_H_

    #define NB_PARTICULES 70000

    static int skeleton_win[4] = {0, 0, 0, 0};

void draw_cimetery(game_t *g);
void anim_cimetery(game_t *g);
void event_cimetery(game_t *g);
scene_t init_cimetery(game_t *g);
body_t *init_cimetery_elem(sfRenderWindow *window, int nb_elem);
button_t *init_cimetery_button(sfRenderWindow *window, int nb_button);
int cimetery_collision(body_t player, body_t elem, sfVector2i new_pos);
interest_t *init_cimetery_interest(sfRenderWindow *window, int nb_interest);

#endif /* !cimetery_H_ */
