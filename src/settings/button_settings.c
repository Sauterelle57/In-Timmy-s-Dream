/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** button_settings
*/

#include "includes.h"
#include "main_menu.h"
#include "settings.h"

void manage_volume(game_t *g, int i)
{
    if (i == 4 && g->params[VOLU] < 99) {
        g->params[VOLU] += 11;
        g->scene[g->curent_scene].elem[8].rect.left += 160;
        sfSprite_setTextureRect(g->scene[g->curent_scene].elem[8].sprite, g->
        scene[g->curent_scene].elem[8].rect);
    }
    if (i == 3 && g->params[VOLU] > 0) {
        g->params[VOLU] -= 11;
        g->scene[g->curent_scene].elem[8].rect.left -= 160;
        sfSprite_setTextureRect(g->scene[g->curent_scene].elem[8].sprite, g->
        scene[g->curent_scene].elem[8].rect);
    }
}

void manage_framerate(game_t *g, int nb)
{
    g->params[FRAM] = g->params[FRAM] == 120 ? 30 : g->params[FRAM] * 2;
    sfText_setString(g->scene[g->curent_scene].button[0].text,
    my_strcat("FPS: ", my_int_to_str(g->params[FRAM])));
}

void manage_difficulty(game_t *g, int nb)
{
    g->params[DIFF] = g->params[DIFF] == 3 ? 1 : g->params[DIFF] + 1;
    sfText_setString(g->scene[g->curent_scene].button[1].text,
    my_strcat("Difficulte : ", my_int_to_str(g->params[DIFF])));
}
