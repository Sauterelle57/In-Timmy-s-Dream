/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** dialogue headers
*/

#ifndef DIALOGUE_H_
    #define DIALOGUE_H_

typedef struct dialogue_s {
    sfVector2f dialogue_pos;
    sfFont *font;
    sfText *text;
    char* text_str;
    char** tab_text;
    int is_showing;
    int is_passed;
    char* temp;
} dialogue_t;

#endif /* !DIALOGUE_H_ */
