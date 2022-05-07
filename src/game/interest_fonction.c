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
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    if (g->scene[3].charged == 1)
        sfMusic_play(g->scene[3].scene_music);
    charge_scene(g, 3);
    g->curent_scene = 3;
}

void go_ghost(game_t *g, int i)
{
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
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    g->player.body.rect.top = 144;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    if (g->scene[13].charged == 1)
        sfMusic_play(g->scene[13].scene_music);
    charge_scene(g, 13);
    g->curent_scene = 13;
}

void go_back(game_t *g, int j)
{
    int tmp = g->previous_scene;

    if (g->warning == 1 && j > 0) {
        g->player.lvl += 1;
        g->warning = 0;
    }
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    sfText_setPosition(g->player.name, (sfVector2f){200, 40});
    Set_Pos(g->player.pv_bar.sprite, 200, 110);
    g->player.body.pos = (sfVector2f){940, 540};
    Set_Pos(g->player.body.sprite, 940, 540);
    g->player.body.rect.top = 0;
    Set_Texture_Rect(g->player.body.sprite, g->player.body.rect);
    Set_Scale(g->player.body.sprite, 1, 1);
    if (g->scene[tmp].charged == 1)
        sfMusic_play(g->scene[tmp].scene_music);
    g->curent_scene = tmp;
    charge_scene(g, g->curent_scene);
}

void go_pause(game_t *g, int i)
{
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    if (g->scene[PAUSE].charged == 1)
        sfMusic_play(g->scene[PAUSE].scene_music);
    charge_scene(g, PAUSE);
    g->curent_scene = PAUSE;
}
