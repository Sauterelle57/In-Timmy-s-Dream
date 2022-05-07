/*
** EPITECH PROJECT, 2022
** prototypes
** File description:
** all prototypes
*/

#ifndef PROTOTYPES_H_
    #define PROTOTYPES_H_

char* open_text(void);
game_t create_game(void);
music_t create_music(void);
timing_t create_timer(void);
player_t create_player(void);
dialogue_t create_dialogue(void);
scene_t create_scene(game_t *g);
void check_dialogue(game_t *gt, int chose);
sfRenderWindow *create_window(int x, int y);
object_t create_object(char *text, int pv, int pa, int type);
body_t create_body(char *text, sfIntRect rect, sfVector2f pos);
sfText *create_button_text(int size, sfVector2f pos, char *string);
sfText *create_text(int size, sfVector2f pos, char *string, char *font);
interest_t create_interest(char *text, sfIntRect rect, sfVector2f pos,\
void (*action)(game_t *, int));
button_t create_square_button(int texture, sfVector2f pos, sfText *text,\
void (*fonction)(game_t *g, int));
button_t create_button(int texture, sfVector2f pos, sfText *text,\
void (*fonction)(game_t *g, int));

#endif /* !PROTOTYPES_H_ */
