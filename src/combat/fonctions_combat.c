/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fonctions_game
*/

#include "includes.h"
#include "combat.h"

void draw_black(game_t *g, body_t *elem)
{
    Set_Pos(g->scene[2].elem[377].sprite, -1980 + g->player.body.pos.x,
    -1480 + g->player.body.pos.y);

    if (g->player.body.rect.top == 96) {
        sfSprite_setOrigin(g->scene[2].elem[377].sprite,
        (sfVector2f){1000, 3900});
        sfSprite_setRotation(g->scene[2].elem[377].sprite, 90.0);
    }
    if (g->player.body.rect.top == 48) {
        sfSprite_setOrigin(g->scene[2].elem[377].sprite,
        (sfVector2f){4010, -100});
        sfSprite_setRotation(g->scene[2].elem[377].sprite, -90.0);
    }
    if (g->player.body.rect.top == 144) {
        sfSprite_setOrigin(g->scene[2].elem[377].sprite,
        (sfVector2f){500, 390});
        sfSprite_setRotation(g->scene[2].elem[377].sprite, 0.0);
    }
    if (g->player.body.rect.top == 0) {
        sfSprite_setOrigin(g->scene[2].elem[377].sprite,
        (sfVector2f){4510, 3400});
        sfSprite_setRotation(g->scene[2].elem[377].sprite, 180.0);
    }
    Draw_Sprite(g->scene[2].elem[377].sprite);
}

void draw_combat(game_t *g, body_t *elem)
{
    for (int i = 0; i < g->scene[2].nb_elem; i++)
        Draw_Sprite(g->scene[2].elem[i].sprite);
    for (int i = 0; i < g->scene[2].nb_interest; i++)
        Draw_Sprite(g->scene[2].interest[i].body.sprite);
    for (int i = 0; i < g->scene[2].nb_button; i++)
        Draw_Sprite(g->scene[2].button[i].body.sprite);
    draw_black(g, elem);
    draw_player(g);
}

void anim_combat(game_t *g)
{
    static float tmp = 0.0;

    g->t.sec = Get_Time(g->t.clock);
    if (g->t.sec - tmp > 0.11) {
        g->player.body.rect.left += g->player.body.rect.left >= 144 ? -144 :
        48;
        Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
        tmp = g->t.sec;
    }
    anim_enemy(g);
}

void anim_enemy(game_t *g)
{
    static float tmp = 0.0;
    int i;
    g->t.sec = Get_Time(g->t.clock);

    if (g->t.sec - tmp > 0.2)
        for (i = 3; i < nb_inter; i++) {
            g->scene[2].interest[i].body.rect.left +=
            g->scene[2].interest[i].body.rect.left >= 144 ? -144 : 48;
            Set_Texture_Rect(g->scene[2].interest[i].body.sprite,
            g->scene[2].interest[i].body.rect);
            tmp = g->t.sec;
        }
}
