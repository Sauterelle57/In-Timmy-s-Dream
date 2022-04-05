/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** combat headers
*/

#ifndef COMBAT_H_
    #define COMBAT_H_

void draw_combat(game_t *g);
void anim_combat(game_t *g);
void event_combat(game_t *g);
scene_t init_combat(game_t *g);
body_t *create_maze(body_t *elem);
int maze_generation(int width, int height);
body_t *init_combat_elem(sfRenderWindow *window);
button_t *init_combat_button(sfRenderWindow *window);
interest_t *init_combat_interest(sfRenderWindow *window);

#endif /* !COMBAT_H_ */
