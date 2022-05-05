/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** main
*/

#include "includes.h"
#include "player.h"
#include "game.h" //scene 0
#include "main_menu.h" //scene 1
#include "combat.h" //scene 2
#include "vampire.h" //scene 3
#include "ghost.h" //scene 4
#include "forest.h" //scene 5
#include "inventory.h" //scene 6
#include "my_loading.h" //scene 7
#include "cimetery.h" //scene 8
#include "settings.h" //scene 9
#include "menu_lose.h" //scene 10
#include "menu_win.h" //scene 11
#include "how_to_play.h" //scene 12

void charge_scene(game_t *g, int next_scene)
{
    scene_t (*init_scene[13])(game_t *g) = {&init_game, &init_menu,
    &init_combat, &init_vampire, &init_ghost, &init_forest, &init_inventory,
    &init_loading, &init_cimetery, &init_settings, &init_menu_lose,
    &init_menu_win, &init_htp};

    if (!g->scene[next_scene].charged) {
        g->scene[next_scene] = init_scene[next_scene](g);
        sfMusic_pause(g->scene[g->previous_scene].scene_music);
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
        draw_cursor(g);
        check_dialogue(g, g->dialogue.chose);
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

int main(void)
{
    srand(get_random());
    game_t game = create_game();

    parse_save(&game);
    game.previous_scene = 7;
    game.curent_scene = 7;
    charge_scene(&game, 7);
    return (game_loop(&game));
}
