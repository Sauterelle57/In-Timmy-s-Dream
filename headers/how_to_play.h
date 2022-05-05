/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** how_to_play
*/

#ifndef HOW_TO_PLAY_H_
    #define HOW_TO_PLAY_H_

void draw_htp(game_t *g);
void anim_htp(game_t *g);
void event_htp(game_t *g);
scene_t init_htp(game_t *g);
void tuto_movement(game_t *g);
body_t *init_htp_elem(sfRenderWindow *window, int nb_elem);
button_t *init_htp_button(sfRenderWindow *window, int nb_button);
interest_t *init_htp_interest(sfRenderWindow *window, int nb_interest);

#endif /* !HOW_TO_PLAY_H_ */
