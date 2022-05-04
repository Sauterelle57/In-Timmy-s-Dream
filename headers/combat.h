/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** combat headers
*/

#ifndef COMBAT_H_
    #define COMBAT_H_

    static int nb_inter = 80;

     static char *CHOICE[10] = {
        "enemies/Clown_idle.png",
        "enemies/Witch_idle.png",
        "enemies/Vampire 01_idle.png",
        "enemies/Zombie 01_idle.png",
        "enemies/Ghost 01_idle.png",
        "enemies/Clown_die.png",
        "enemies/Witch_die.png",
        "enemies/Vampire 01_die.png",
        "enemies/Zombie 01_die.png",
        "enemies/Ghost 01_die.png"
    };

    static char *CHOICE_LIGHTS[4] = {
        "other/font_invisible.png",
        "other/font_invisible_small.png",
        "other/font_invisible_no.png",
        "other/font_invisible_lamp.png"
    };

void draw_combat(game_t *g, body_t *elem);
void draw_black(game_t *g, body_t *elem);
void anim_combat(game_t *g);
void anim_enemy(game_t *g);
void event_combat(game_t *g);
scene_t init_combat(game_t *g);
void combat_movement(game_t *g);
body_t *create_maze(body_t *elem, game_t *g);
int maze_generation(int width, int height);
button_t *init_combat_button(sfRenderWindow *window);
interest_t *init_combat_interest(int nb_interest, body_t *elem);
void check_button(game_t *g, sfVector2i pos, sfVector2u size);
int combat_collision(body_t player, body_t elem, sfVector2i new_pos);
interest_t *spawn_enemy(int nb_interest, body_t *elem, interest_t *interest);

#endif /* !COMBAT_H_ */
