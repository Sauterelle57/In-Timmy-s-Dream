/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** settings
*/

#ifndef SETTINGS_H_
    #define SETTINGS_H_
    #include "includes.h"
    #include "main_menu.h"

    void draw_settings(game_t *g);
    void event_settings(game_t *g);
    void anim_settings(game_t *g);
    void charge_scene(game_t *g, int next_scene);
    button_t *init_settings_button(sfRenderWindow *window, int nb);
    interest_t *init_settings_interest(sfRenderWindow *window, int nb);
    body_t *init_settings_elem(sfRenderWindow *window, int nb);
    scene_t init_settings(game_t *g);

#endif /* !SETTINGS_H_ */
