/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** light type
*/

#include "includes.h"
#include "combat.h"
#include "interest.h"

void draw_torch(game_t *g)
{
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
}

void choose_light(body_t *elem, game_t *g)
{
    if (g->player.inventory[4].own == 1) {
        elem[377] = create_body(CHOICE_LIGHTS[3],
        (sfIntRect){0, 0, 5032, 3774},
        (sfVector2f){-1700 - 0, -1300});
    }
    if (g->player.inventory[5].own == 1 && g->player.inventory[4].own != 1) {
        elem[377] = create_body(CHOICE_LIGHTS[0],
        (sfIntRect){0, 0, 5032, 3774},
        (sfVector2f){-1700 - 0, -1300});
    }
}
