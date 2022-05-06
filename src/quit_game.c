/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** quit_game
*/

#include "includes.h"
#include "player.h"

static int save_file(game_t *g)
{
    FILE *file = fopen(g->save_file, "w");

    if (file->_fileno < 0)
        my_printf("nop\n");
    write(file->_fileno, my_int_to_str(g->player.lvl), 1);
    write(file->_fileno, "#", 1);
    for (int i = 0; i < NB_OBJ; i++) {
        if (g->player.inventory[i].own)
            write(file->_fileno, "1.", 2);
        else
            write(file->_fileno, "0.", 2);
    }
    fclose(file);
}

void quit_game(game_t *g, int i)
{
    save_file(g);
    sfMusic_destroy(g->m.back);
    sfRenderWindow_close(g->window);
    for (int i = 0; i < 14; i++)
        if (g->scene[i].charged == 1)
            sfMusic_destroy(g->scene[i].scene_music);
}
