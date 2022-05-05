/*
** EPITECH PROJECT, 2022
** menu.c
** File description:
** where the GRAAAAOOOWWW begins
*/

#include "includes.h"

sfText *create_button_text(int size, sfVector2f pos, char *string)
{
    sfText *text = sfText_create();

    sfText_setFont(text,  sfFont_createFromFile("other/button.ttf"));
    sfText_setCharacterSize(text, size);
    sfText_setPosition(text, pos);
    sfText_setString(text, string);
    return (text);
}

sfText *create_text(int size, sfVector2f pos, char *string, char *font)
{
    sfText *text = sfText_create();

    sfText_setFont(text,  sfFont_createFromFile(font));
    sfText_setCharacterSize(text, size);
    sfText_setPosition(text, pos);
    sfText_setString(text, string);
    return (text);
}

dialogue_t create_dialogue(void)
{
    sfVector2f dialogue_pos = (sfVector2f){400, 850};
    sfFont *font = sfFont_createFromFile("other/dialogue.ttf");
    sfText *text = sfText_create();
    body_t box = create_body("other/bubble.png", (sfIntRect){0, 0, 900, 250},
    (sfVector2f){100, 600});
    Set_Scale(box.sprite, 1.5, 1.5);
    char** tab_text = my_str_to_word_array(open_text(), '\n');
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 30);
    sfText_setFillColor(text, sfBlack);
    sfText_setPosition(text, dialogue_pos);
    dialogue_t dialogue = {dialogue_pos, font, text, box, NULL, tab_text,
    0, 0, NULL, 0, 0};
    return (dialogue);
}
