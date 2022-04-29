/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** door_interest
*/

#include "includes.h"
#include "game.h"

void example(game_t *g, int i)
{
    my_printf("Action !\n");
}

void go_game(game_t *g, int i)
{
    g->previous_scene = g->curent_scene;
    sfMusic_pause(g->scene[g->previous_scene].scene_music);
    g->player.body.rect.top = 0;
    g->player.body.pos.x = 940;
    g->player.body.pos.y = 540;
    Set_Pos(g->player.body.sprite, 940, 540);
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    if (g->scene[0].charged == 1)
        sfMusic_play(g->scene[0].scene_music);
    g->curent_scene = 0;
}

void go_combat(game_t *g, int i)
{
    g->previous_scene = g->curent_scene;
    sfMusic_pause(g->scene[g->previous_scene].scene_music);
    g->player.body.rect.top = 96;
    g->player.body.pos.x = 260;
    g->player.body.pos.y = 140;
    Set_Pos(g->player.body.sprite, 260, 140);
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    if (g->scene[2].charged == 1)
        sfMusic_play(g->scene[2].scene_music);
    charge_scene(g, 2);
    g->curent_scene = 2;
}

void go_vampire(game_t *g, int i)
{
    g->previous_scene = g->curent_scene;
    sfMusic_pause(g->scene[g->previous_scene].scene_music);
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    if (g->scene[3].charged == 1)
        sfMusic_play(g->scene[3].scene_music);
    charge_scene(g, 3);
    g->curent_scene = 3;
}

void go_ghost(game_t *g, int i)
{
    g->previous_scene = g->curent_scene;
    sfMusic_pause(g->scene[g->previous_scene].scene_music);
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    if (g->scene[4].charged == 1)
        sfMusic_play(g->scene[4].scene_music);
    charge_scene(g, 4);
    g->curent_scene = 4;
}

void go_forest(game_t *g, int i)
{
    g->previous_scene = g->curent_scene;
    sfMusic_pause(g->scene[g->previous_scene].scene_music);
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
    g->previous_scene = g->curent_scene;
    sfMusic_pause(g->scene[g->previous_scene].scene_music);
    g->player.body.rect.top = 0;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    g->player.body.pos.x = 350;
    g->player.body.pos.y = 350;
    Set_Pos(g->player.body.sprite, 350, 350);
    Set_Scale(g->player.body.sprite, 6, 6);
    if (g->scene[6].charged == 1)
        sfMusic_play(g->scene[6].scene_music);
    charge_scene(g, 6);
    g->curent_scene = 6;
}

void go_cimetery(game_t *g, int i)
{
    g->previous_scene = g->curent_scene;
    sfMusic_pause(g->scene[g->previous_scene].scene_music);
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    if (g->scene[8].charged == 1)
        sfMusic_play(g->scene[8].scene_music);
    charge_scene(g, 8);
    g->curent_scene = 8;
}

void go_back(game_t *g, int i)
{
    int tmp = g->previous_scene;

    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    sfMusic_play(g->scene[g->previous_scene].scene_music);
    g->previous_scene = g->curent_scene;
    sfText_setPosition(g->player.name, (sfVector2f){200, 40});
    Set_Pos(g->player.pv_bar.sprite, 200, 110);
    g->player.body.rect.top = 0;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    g->player.body.pos.x = 960;
    g->player.body.pos.y = 540;
    Set_Pos(g->player.body.sprite, 960, 540);
    Set_Scale(g->player.body.sprite, 1, 1);
    g->curent_scene = tmp;
}
