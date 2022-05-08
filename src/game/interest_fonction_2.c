/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** interest_fonction_2
*/

#include "includes.h"
#include "game.h"
#include "player.h"

void go_ghost(game_t *g, int i)
{
    sfSound_play(g->m.door);
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    if (g->scene[4].charged == 1)
        sfMusic_play(g->scene[4].scene_music);
    charge_scene(g, 4);
    g->curent_scene = 4;
}

void go_forest(game_t *g, int i)
{
    sfSound_play(g->m.door);
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    g->curent_scene = 5;
    if (g->scene[5].charged == 1)
        sfMusic_play(g->scene[5].scene_music);
    charge_scene(g, 5);
    g->curent_scene = 5;
}

void go_inventory(game_t *g, int i)
{
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 0;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    Set_Scale(g->player.body.sprite, 6, 6);
    g->player.body.pos = (sfVector2f){350, 350};
    Set_Pos(g->player.body.sprite, 350, 350);
    if (g->scene[6].charged == 1)
        sfMusic_play(g->scene[6].scene_music);
    charge_scene(g, 6);
    g->curent_scene = 6;
}

void go_cimetery(game_t *g, int i)
{
    sfSound_play(g->m.door);
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    if (g->scene[8].charged == 1)
        sfMusic_play(g->scene[8].scene_music);
    charge_scene(g, 8);
    g->curent_scene = 8;
}

void go_settings(game_t *g, int i)
{
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    if (g->scene[9].charged == 1)
        sfMusic_play(g->scene[9].scene_music);
    charge_scene(g, 9);
    g->curent_scene = 9;
}
