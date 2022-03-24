/*
** EPITECH PROJECT, 2022
** prototypes
** File description:
** all prototypes
*/

#ifndef PROTOTYPES_H_
    #define PROTOTYPES_H_

timer_t create_timer(void);
object_t create_object(char *text, int pv, int pa, int type);
body_t create_body(char *text, sfIntRect rect, sfVector2f pos);
interest_t create_interest(char *text, sfIntRect rect, sfVector2f pos,
void (*action)(game_t *g));
button_t create_square_button(char *texture, sfVector2f pos, sfText *text,
void (*fonction)(game_t *));
button_t create_button(char *texture, sfVector2f pos, sfText *text,
void (*fonction)(game_t *));
player_t create_player(void);
game_t create_game(void);
scene_t create_scene(game_t *g);

#endif /* !PROTOTYPES_H_ */
