/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** door_interest
*/

#include "includes.h"
#include "game.h"
#include "player.h"
scene_t init_combat(game_t *g);

void load_game(game_t *g, int i)
{
    g->player.pv = 5;
    g->player.pv_bar.rect.left = 0;
    sfSprite_setTextureRect(g->player.pv_bar.sprite, g->player.pv_bar.rect);
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    if (i == 1)
        g->save_file = "save.txt";
    if (g->scene[0].charged == 1)
        sfMusic_play(g->scene[0].scene_music);
    charge_scene(g, 0);
    g->curent_scene = 0;
}

void go_game(game_t *g, int i)
{
    sfSound_play(g->m.door);
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 0;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    g->player.body.pos = (sfVector2f){940, 540};
    Set_Pos(g->player.body.sprite, 940, 540);
    if (g->scene[0].charged == 1)
        sfMusic_play(g->scene[0].scene_music);
    charge_scene(g, 0);
    g->curent_scene = 0;
}

void go_menu(game_t *g, int i)
{
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    if (g->scene[1].charged == 1)
        sfMusic_play(g->scene[1].scene_music);
    charge_scene(g, 1);
    g->curent_scene = 1;
}

void go_combat(game_t *g, int k)
{
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    g->player.speed = SPEED;
    g->player.body.rect.top = 96;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    g->player.body.pos = (sfVector2f){260, 140};
    Set_Pos(g->player.body.sprite, 260, 140);
    if (g->scene[2].charged == 1)
        sfMusic_destroy(g->scene[2].scene_music);
    g->scene[2] = init_combat(g);
    g->scene[2].charged = 1;
    sfMusic_play(g->scene[2].scene_music);
    g->curent_scene = 2;
}

void go_vampire(game_t *g, int i)
{
    sfSound_play(g->m.door);
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    if (g->scene[3].charged == 1)
        sfMusic_play(g->scene[3].scene_music);
    charge_scene(g, 3);
    g->curent_scene = 3;
}
