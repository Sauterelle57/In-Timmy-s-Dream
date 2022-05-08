/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main
*/

#include "includes.h"
#include "player.h"
#include "game.h"
#include "main_menu.h"
#include "combat.h"
#include "vampire.h"
#include "ghost.h"
#include "forest.h"
#include "inventory.h"
#include "my_loading.h"
#include "cimetery.h"
#include "settings.h"
#include "menu_lose.h"
#include "menu_win.h"
#include "how_to_play.h"
#include "timmy_room.h"
#include "pause_menu.h"

void charge_scene(game_t *g, int next_scene)
{
    scene_t (*init_scene[15])(game_t *g) = {&init_game, &init_menu,
    &init_combat, &init_vampire, &init_ghost, &init_forest, &init_inventory,
    &init_loading, &init_cimetery, &init_settings, &init_menu_lose,
    &init_menu_win, &init_htp, &init_timmy_room, &init_pause_menu};

    if (g->scene[next_scene].charged == 0) {
        g->scene[next_scene] = init_scene[next_scene](g);
        sfMusic_play(g->scene[next_scene].scene_music);
        g->scene[next_scene].charged = 1;
    }
}

static void chose_mouvement(game_t *g)
{
    if (g->curent_scene == 2)
        combat_movement(g);
    else if (g->curent_scene == 12)
        tuto_movement(g);
}

int game_loop(game_t *g)
{
    while (sfRenderWindow_isOpen(g->window)) {
        sfRenderWindow_clear(g->window, sfBlack);
        g->t.sec = Get_Time(g->t.clock);
        g->scene[g->curent_scene].anim(g);
        g->scene[g->curent_scene].draw(g);
        check_dialogue(g, g->dialogue.chose);
        draw_cursor(g);
        if (sfRenderWindow_pollEvent(g->window, &g->event))
            g->scene[g->curent_scene].event(g);
        if ((Key_Pressed(sfKeyUp) || Key_Pressed(sfKeyDown) ||
        Key_Pressed(sfKeyRight) || Key_Pressed(sfKeyLeft) || Key_Pressed(sfKeyZ
        ) || Key_Pressed(sfKeyS) || Key_Pressed(sfKeyD) || Key_Pressed(sfKeyQ))
        && g->curent_scene != 6)
            g->curent_scene == 2 || g->curent_scene == 12 ? chose_mouvement(g)
            : movement(g);
        else
            Set_Texture(g->player.body.sprite, NPC[16]);
        sfRenderWindow_display(g->window);
    }
    return (0);
}

static int parse_save(game_t *g)
{
    int j = 2;
    size_t len = 0;
    char *buffer = NULL;
    FILE *file = fopen(g->save_file, "r");
    int end_buffer = getline(&buffer, &len, file);

    buffer[end_buffer] = '\0';
    g->player.lvl = my_getnbr(&buffer[0]);
    for (int i = 0; i < NB_OBJ; i++, j += 2)
        g->player.inventory[i].own = my_getnbr(&buffer[j]);
    fclose(file);
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h")) {
        flag_h();
        return (0);
    }
    srand(get_random());
    game_t game = create_game();

    parse_save(&game);
    game.previous_scene = 7;
    game.curent_scene = 7;
    charge_scene(&game, 7);
    return (game_loop(&game));
}
