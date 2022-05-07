/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** main
*/

#include "dialogue.h"
#include "includes.h"
#include "struct.h"

void reset_dialogue(game_t *gt)
{
    gt->dialogue.is_showing = 0;
    gt->dialogue.is_passed = 0;
    gt->dialogue.chose = 0;
    sfText_destroy(gt->dialogue.text);
    gt->dialogue.text = sfText_create();
    free(gt->dialogue.temp);
    gt->dialogue.temp = NULL;
    gt->dialogue.check = 0;
    sfText_setFont(gt->dialogue.text, gt->dialogue.font);
    sfText_setCharacterSize(gt->dialogue.text, 25);
    sfText_setFillColor(gt->dialogue.text, sfBlack);
    sfText_setPosition(gt->dialogue.text, gt->dialogue.dialogue_pos);
    gt->dialogue.speed = 0.05;
}

void check_dialogue(game_t *gt, int chose)
{
    if (chose == 0)
        gt->dialogue.chose = 0;
    if (chose != 0) {
        gt->dialogue.chose = chose;
        func_text(gt, chose);
    }
    if (chose != 0 && gt->dialogue.is_showing == 1 &&
    (Key_Pressed(sfKeyEnter))) {
        reset_dialogue(gt);
        gt->dialogue.chose = 0;
        return;
    }
    if (chose != 0 && gt->dialogue.is_showing == 0 && (Key_Pressed(sfKeyEnter)))
        gt->dialogue.speed = 0.01;
}

char *add_chr_to_str(char *str, char c)
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

char *pass_dialogue(char** temp, game_t *gt, int chose)
{
    (*temp) = malloc(sizeof(char) * (my_strlen(gt->dialogue.tab_text[chose]) +
    1));
    for (int i = 0; i < my_strlen(gt->dialogue.tab_text[chose]); ++i)
        (*temp)[i] = '\0';
    (*temp)[my_strlen(gt->dialogue.tab_text[chose])] = '\0';
    gt->dialogue.is_passed = 1;
    return ((*temp));
}

void func_text(game_t *gt, int chose)
{
    static float time = 0;

    if (gt->dialogue.is_passed == 0) {
        pass_dialogue(&gt->dialogue.temp, gt, chose);
        gt->player.lvl += chose == 2 ? 1 : 0;
    }
    gt->t.sec = Get_Time(gt->t.clock);
    while (gt->t.sec-time > gt->dialogue.speed &&
    gt->dialogue.is_showing == 0) {
        gt->dialogue.temp = add_chr_to_str(gt->dialogue.temp,
        gt->dialogue.tab_text[chose][gt->dialogue.check]);
        gt->dialogue.check++;
        time = gt->t.sec;
        if (my_strlen(gt->dialogue.temp) ==
        my_strlen(gt->dialogue.tab_text[chose]))
            gt->dialogue.is_showing = 1;
    }
    sfText_setString(gt->dialogue.text, gt->dialogue.temp);
    sfRenderWindow_drawSprite(gt->window, gt->dialogue.box.sprite, 0);
    sfRenderWindow_drawText(gt->window, gt->dialogue.text, NULL);
}
