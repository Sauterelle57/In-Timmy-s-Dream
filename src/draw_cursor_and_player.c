/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** draw_player
*/

#include "includes.h"

void draw_player(game_t *g)
{
    Draw_Sprite(g->player.body.sprite);
    Draw_Sprite(g->scene[g->curent_scene].elem[1].sprite);
    Draw_Sprite(g->player.picture.sprite);
    Draw_Text(g->player.name);
    Draw_Sprite(g->player.pv_bar.sprite);
}

void draw_cursor(game_t *g)
{
    sfVector2u size = Get_Window_size();

    if (g->curent_scene == 7 || g->curent_scene == 2)
        return;
    Set_Pos(g->cursor.sprite, Get_Mouse_Pos().x * (1920.0 / size.x),
    Get_Mouse_Pos().y * (1080.0 / size.y));
    Draw_Sprite(g->cursor.sprite);
}
