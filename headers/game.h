/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** game headers
*/

#ifndef GAME_H_
    #define GAME_H_

scene_t init_game(game_t *g);
void draw_game(game_t *g, scene_t *scene);
void event_game(game_t *g, scene_t *scene);
void anim_game(game_t *g, scene_t *scene);
button_t *init_game_button(sfRenderWindow *window);
button_t *init_game_interest(sfRenderWindow *window);
button_t *init_game_elem(sfRenderWindow *window);

#endif /* !GAME_H_ */
