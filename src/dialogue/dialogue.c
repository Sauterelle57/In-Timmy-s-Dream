/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** main
*/

#include "../../headers/dialogue.h"
#include "../../headers/includes.h"
#include "../../headers/struct.h"

char* add_chr_to_str(char *str, char c)
{
    char *string = malloc(sizeof(char) * (my_strlen(str) + 2));
    int i = 0;

    for (; str[i] != '\0'; ++i)
        string[i] = str[i];
    string[i] = c;
    string[i + 1] = '\0';
    return (string);
}

void func_text(dialogue_t *tt, sfRenderWindow *window, game_t *gt, int chose)
{
    static float time = 0;
    static int i = 0;

    if (tt->is_passed == 0)
        tt->temp = pass_dialogue(tt->temp, tt, chose);
    time += gt->t.sec;
    while (time >= 0.10 && tt->is_showing != 1) {
        tt->temp = add_chr_to_str(tt->temp, tt->tab_text[chose][i]);
        tt->text_str = tt->temp;
        ++i;
        time -= 0.10;
    }
    sfText_setString(tt->text, tt->text_str);
    sfRenderWindow_drawText(window, tt->text, NULL);
    if (my_strlen(tt->temp) == my_strlen(tt->tab_text[chose])) {
        tt->is_showing = 1;
    }
}
