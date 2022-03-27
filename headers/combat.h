/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** combat headers
*/

#ifndef COMBAT_H_
    #define COMBAT_H_

button_t *init_combat_button(sfRenderWindow *window);
button_t *init_combat_interest(sfRenderWindow *window);
button_t *init_combat_elem(sfRenderWindow *window);
void draw_combat(game_t *g);
void event_combat(game_t *g);
void anim_combat(game_t *g);

#endif /* !COMBAT_H_ */
