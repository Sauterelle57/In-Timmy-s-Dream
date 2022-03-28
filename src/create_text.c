/*
** EPITECH PROJECT, 2022
** menu.c
** File description:
** where the GRAAAAOOOWWW begins
*/

#include "includes.h"

sfText *create_text(int size, sfVector2f pos, char *string)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("other/button.ttf");

    sfText_setFont(text, font);
    sfText_setCharacterSize(text, size);
    sfText_setColor(text, (sfColor){255, 255, 255, 255});
    sfText_setPosition(text, pos);
    sfText_setOutlineColor(text, (sfColor){0, 0, 0, 255});
    sfText_setOutlineThickness(text, 5);
    sfText_setString(text, string);
    return (text);
}
