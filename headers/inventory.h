/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** inventory
*/

#ifndef inventory_H_
    #define inventory_H_

    #define NB_PARTICULES 16

void fonction(game_t *g);
void draw_inventory(game_t *g);
void anim_inventory(game_t *g);
void event_inventory(game_t *g);
scene_t init_inventory(game_t *g);
void inventory_movement(game_t *g);
body_t *init_inventory_elem(sfRenderWindow *window, int nb_elem);
button_t *init_inventory_button(sfRenderWindow *window, int nb_button);
interest_t *init_inventory_interest(sfRenderWindow *window, int nb_interest);

#endif /* !inventory_H_ */
