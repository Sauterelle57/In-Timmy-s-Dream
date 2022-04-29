/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** main
*/

#include "forest.h"
#include "includes.h"
#include "struct.h"

char* add_chr_to_str(char *str, char c)
{
    char *string = malloc(sizeof(char) * (my_strlen(str) + 2));
    int i = 0;

    for (; str[i] != '\0'; ++i)
        string[i] = str[i];
    if (c == '#')
        string[i] = '\n';
    else
        string[i] = c;
    string[i + 1] = '\0';
    return (string);
}

char* pass_dialogue(char* temp, game_t *gt, int chose)
{
    temp = malloc(sizeof(char) * (my_strlen(gt->dialogue.tab_text[chose]) + 1));
    for (int i = 0; i < my_strlen(gt->dialogue.tab_text[chose]); ++i)
        temp[i] = '\0';
    temp[my_strlen(gt->dialogue.tab_text[chose])] = '\0';
    gt->dialogue.is_passed = 1;
    return (temp);
}

void func_text(game_t *gt, int chose)
{
    static float time = 0;
    static int i = 0;

    if (gt->dialogue.is_passed == 0)
        gt->dialogue.temp = pass_dialogue(gt->dialogue.temp, gt, chose);
    gt->t.sec = Get_Time(gt->t.clock);
    if (gt->t.sec-time < 0.10 /*time >= 0.10 */&& gt->dialogue.is_showing != 1) {
        gt->dialogue.temp = add_chr_to_str(gt->dialogue.temp,
        gt->dialogue.tab_text[chose][i]);
        gt->dialogue.text_str = gt->dialogue.temp;
        ++i;
        //time -= 0.10;
        time = gt->t.sec;
    }
    sfText_setString(gt->dialogue.text, gt->dialogue.text_str);
    sfRenderWindow_drawText(gt->window, gt->dialogue.text, NULL);
    if (my_strlen(gt->dialogue.temp) == my_strlen(gt->dialogue.tab_text[chose])) {
        gt->dialogue.is_showing = 1;
    }
}
