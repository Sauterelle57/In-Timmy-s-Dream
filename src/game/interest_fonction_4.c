/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** interest_fonction_2
*/

#include "includes.h"
#include "game.h"
#include "player.h"
void set_mausoleum(game_t *g, int tmp, sfVector2f pos);

void load_new_game(game_t *g, int i)
{
    g->save_file = "save.txt";
    g->player.pv = 5;
    g->player.pv_bar.rect.left = 0;
    sfSprite_setTextureRect(g->player.pv_bar.sprite, g->player.pv_bar.rect);
    sfMusic_pause(g->scene[g->curent_scene].scene_music);
    g->previous_scene = g->curent_scene;
    if (g->scene[0].charged == 1)
        sfMusic_play(g->scene[0].scene_music);
    parse_save(g);
    charge_scene(g, 0);
    g->curent_scene = 0;
}

void rick_astley(game_t *g, int i)
{
    check_dialogue(g, 18);
    for (int i = 0; i < 15; i++)
        if (g->scene[i].charged == 1) {
            sfMusic_destroy(g->scene[i].scene_music);
            g->scene[i].scene_music = sfMusic_createFromFile
            ("music/rickroll.ogg");
            sfMusic_setLoop(g->scene[i].scene_music, sfTrue);
            g->troll = 0;
        }
    sfMusic_play(g->scene[g->curent_scene].scene_music);
}

static void check_cimetery_mausoleum(game_t *g)
{
    sfVector2f *pos = malloc(sizeof(sfVector2f) * 4);
    pos[0] = (sfVector2f){-85, 275};
    pos[1] = (sfVector2f){1840, 275};
    pos[2] = (sfVector2f){-75, -715};
    pos[3] = (sfVector2f){1810, -715};

    g->player.lvl += 1;
    if (g->previous_scene != 8)
        return;
    for (int i = 0; i < 4; i++)
        if (g->skeleton_win[i] > 0) {
            set_mausoleum(g, g->skeleton_win[i], pos[i]);
            g->skeleton_win[i] = -1;
        }
}

void go_back(game_t *g, int j)
{
    int tmp = g->previous_scene;

    if (g->warning == 1 && j == 0)
        check_cimetery_mausoleum(g);
    for (int i = 0; i < 4; i++)
        if (g->skeleton_win[i] > 0)
            g->skeleton_win[i] = 0;
    g->warning = 0;
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
