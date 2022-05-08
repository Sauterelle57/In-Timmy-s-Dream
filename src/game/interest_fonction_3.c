/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** interest_fonction_2
*/

#include "includes.h"
#include "game.h"
#include "player.h"

void quit_settings(game_t *g, int i)
{
    int scene_to_load = 1;

    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    if (g->scene[PAUSE].charged == 1)
        scene_to_load = PAUSE;
    if (g->scene[scene_to_load].charged == 1)
        sfMusic_play(g->scene[scene_to_load].scene_music);
    charge_scene(g, scene_to_load);
    g->curent_scene = scene_to_load;
}

void go_menu_lose(game_t *g, int i)
{
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    if (g->scene[10].charged == 1)
        sfMusic_play(g->scene[10].scene_music);
    charge_scene(g, 10);
    g->curent_scene = 10;
}

void go_menu_win(game_t *g, int i)
{
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    if (g->scene[11].charged == 1)
        sfMusic_play(g->scene[11].scene_music);
    charge_scene(g, 11);
    g->curent_scene = 11;
}

void go_htp(game_t *g, int i)
{
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    if (g->scene[12].charged == 1)
        sfMusic_play(g->scene[12].scene_music);
    charge_scene(g, 12);
    g->curent_scene = 12;
}

void go_room(game_t *g, int i)
{
    sfSound_play(g->m.door);
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    if (g->scene[13].charged == 1)
        sfMusic_play(g->scene[13].scene_music);
    charge_scene(g, 13);
    g->curent_scene = 13;
}
