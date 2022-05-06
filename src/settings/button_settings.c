/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** button_settings
*/

#include "includes.h"
#include "main_menu.h"
#include "settings.h"

void set_volume(game_t *g)
{
    for (int i = 0; i < 14; i++)
        if (g->scene[i].charged == 1 && i != 7)
            sfMusic_setVolume(g->scene[i].scene_music, g->params[VOL]);
}

void manage_volume(game_t *g, int i)
{
    if (i == 4 && g->params[VOL] < 99) {
        g->params[VOL] += 11;
        g->scene[g->curent_scene].elem[8].rect.left += 160;
        sfSprite_setTextureRect(g->scene[g->curent_scene].elem[8].sprite, g->
        scene[g->curent_scene].elem[8].rect);
        set_volume(g);
    }
    if (i == 3 && g->params[VOL] > 0) {
        g->params[VOL] -= 11;
        g->scene[g->curent_scene].elem[8].rect.left -= 160;
        sfSprite_setTextureRect(g->scene[g->curent_scene].elem[8].sprite, g->
        scene[g->curent_scene].elem[8].rect);
        set_volume(g);
    }
}

void manage_framerate(game_t *g, int nb)
{
    g->params[FPS] = g->params[FPS] == 120 ? 30 : g->params[FPS] * 2;
    sfText_setString(g->scene[g->curent_scene].button[0].text,
    my_strcat("FPS: ", my_int_to_str(g->params[FPS])));
}

void manage_difficulty(game_t *g, int nb)
{
    g->params[DIFF] = g->params[DIFF] == 3 ? 1 : g->params[DIFF] + 1;
    sfText_setString(g->scene[g->curent_scene].button[1].text,
    my_strcat("Difficulte : ", my_int_to_str(g->params[DIFF])));
}
