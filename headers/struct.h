/*
** EPITECH PROJECT, 2021
** RPG
** File description:
** all struct
*/

#ifndef STRUCT_H
    #define STRUCT_H

    #include <SFML/Audio.h>
    #include <SFML/Config.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window/Export.h>

typedef struct particule_s {
    sfVertexArray *pixels;
    int height;
    int width;
} particule_t;

typedef struct dialogue_s {
    sfVector2f dialogue_pos;
    sfFont *font;
    sfText *text;
    char* text_str;
    char** tab_text;
    int is_showing;
    int is_passed;
    char* temp;
    int chose;
    int check;
} dialogue_t;

typedef struct body_s {
    sfTexture *text;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f pos;
} body_t;

typedef struct object_s {
    body_t body;
    int own;
    int pv;
    int pa;
    int type;
} object_t;

typedef struct player_s {
    sfText *name;
    body_t body;
    object_t *inventory;
    body_t pv_bar;
    body_t picture;
    int speed;
    int pv;
    int pa;
    int lvl;
} player_t;

typedef struct interest_s {
    body_t body;
    void (*on_click)();
    int line;
} interest_t;

typedef struct music_s {
    sfMusic *back;
    sfSoundBuffer *soundbuffer;
    sfSound *click;
} music_t;

typedef struct button_s {
    body_t body;
    sfVector2f size;
    sfText *text;
    int png;
    void (*on_click)();
} button_t;

typedef struct scene_s {
    int charged;
    button_t *button;
    int nb_button;
    body_t *elem;
    int nb_elem;
    interest_t *interest;
    int nb_interest;
    sfMusic *scene_music;
    sfVertexArray *array;
    void (*draw)();
    void (*event)();
    void (*anim)();
} scene_t;

typedef struct timing_s {
    sfClock *clock;
    float pause;
    float sec;
} timing_t;

typedef struct game_s {
    sfRenderWindow *window;
    sfEvent event;
    timing_t t;
    music_t m;
    body_t cursor;
    player_t player;
    dialogue_t dialogue;
    int pause;
    float cooldown;
    char *save_file;
    scene_t scene[9];
    int previous_scene;
    int curent_scene;
} game_t;

#endif /* !RPG_H */
