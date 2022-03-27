/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** dialogue headers
*/

#ifndef DIALOGUE_H_
    #define DIALOGUE_H_

scene_t init_dialogue(game_t *g);
void draw_dialogue(game_t *g);
void event_dialogue(game_t *g);
void anim_dialogue(game_t *g);
button_t *init_dialogue_elem(sfRenderWindow *window);
button_t *init_dialogue_interest(sfRenderWindow *window);
button_t *init_dialogue_button(sfRenderWindow *window);

#endif /* !DIALOGUE_H_ */
