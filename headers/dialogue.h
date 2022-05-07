/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** dialogue headers
*/

#ifndef DIALOGUE_H_
    #define DIALOGUE_H_

    #include "struct.h"

void init_dialogue(game_t *gt);
char* open_text(void);
void func_text(game_t *gt, int chose);
void check_dialogue(game_t *gt, int chose);

#endif /* !DIALOGUE_H_ */
