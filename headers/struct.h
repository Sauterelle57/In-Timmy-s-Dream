/*
** EPITECH PROJECT, 2021
** RPG
** File description:
** all struct
*/

#ifndef STRUCT_H
    #define STRUCT_H
    #include "includes.h"

typedef struct game_s {
    sfRenderWindow *window;
    sfEvent event;
    body_t cursor;
    player_t player;
    scene_t scene[4];
} game_t;

typedef struct scene_s {
    timer_t t;
    //music_t *m;
    button_t *button;
    int nb_button;
    body_t *elem;
    int nb_elem;
    interest_t *interest;
    int nb_interest;
    void (*event)();
    void (*anim)();
    void (*draw)();
} scene_t;

typedef struct player_s {
    body_t body;
    object_t inventory[25];
    int pv;
    int pa;
    int orient;
} player_t;

typedef struct interest_s {
    body_t body;
    void (*on_click)();
} interest_t;

typedef struct object_s {
    body_t body;
    int own;
    int pv;
    int pa;
    int type;
} object_t;

typedef struct body_s {
    sfTexture *text;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f pos;
} body_t;

typedef struct timer_s {
    sfClock *clock;
    float sec;
} timer_t;

typedef struct music_s {
    sfMusic *example_music;
    sfSoundBuffer *example_sounbuffer;
    sfSound *example_sound;
} music_t;

typedef struct button_s {
    body_t body;
    sfVector2f size;
    sfText *text;
    void (*on_click)();
} button_t;

#endif /* !RPG_H */
