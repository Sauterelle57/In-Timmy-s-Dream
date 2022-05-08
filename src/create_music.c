/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_music
*/

#include "includes.h"

music_t create_music(void)
{
    sfMusic *back = sfMusic_createFromFile("music/Home.ogg");
    music_t m = {back};

    m.clickbuffer = sfSoundBuffer_createFromFile("music/click.ogg");
    m.click = sfSound_create();
    sfSound_setBuffer(m.click, m.clickbuffer);

    sfMusic_setLoop(m.back, sfTrue);
    return (m);
}
