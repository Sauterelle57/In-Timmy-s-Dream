/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** includes
*/

#ifndef INCLUDES_H_
    #define INCLUDES_H_

    #define PAUSE 14

// CSFML
    #include <SFML/Audio.h>
    #include <SFML/Config.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window/Export.h>

// LIB
    #include "../lib/my/includes/my.h"

    #include "struct.h"
    #include "define.h"
    #include "create_prototypes.h"
    #include "category.h"

// OPEN
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

// DIALOGUE
    #include <unistd.h>

    #define NB_PIXELS 16
    #define DIFF 0
    #define FPS 1
    #define VOL 2

void parse_save(game_t *g);
void pause_game(game_t *g);
void anim_pixels(game_t *g);
void draw_cursor(game_t *g);
void draw_player(game_t * g);
unsigned int get_random(void);
void quit_game(game_t *g, int i);
void charge_scene(game_t *g, int next_scene);
void manage_pixels(game_t *g, sfVector2i pos);
void move_sprite(body_t *sprite, sfVector2f pos, int speed);
void add_pixel(sfVertexArray *pixels, sfVector2f pos, sfColor color);

#endif /* !INCLUDES_H_ */
