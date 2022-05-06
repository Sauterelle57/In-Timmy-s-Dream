/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** interest
*/

#ifndef INTEREST_H_
    #define INTEREST_H_

void go_htp(game_t *g, int i);
void nothing(game_t *g, int i);
void go_game(game_t *g, int i);
void go_back(game_t *g, int i);
void go_menu(game_t *g, int i);
void go_ghost(game_t *g, int i);
void go_pause(game_t *g, int i);
void go_forest(game_t *g, int i);
void go_combat(game_t *g, int i);
void go_vampire(game_t *g, int i);
void go_settings(game_t *g, int i);
void go_cimetery(game_t *g, int i);
void go_menu_win(game_t *g, int i);
void go_inventory(game_t *g, int i);
void go_menu_lose(game_t *g, int i);
void quit_settings(game_t *g, int i);
void func_text(game_t *gt, int chose);

#endif /* !INTEREST_H_ */
