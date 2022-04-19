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
