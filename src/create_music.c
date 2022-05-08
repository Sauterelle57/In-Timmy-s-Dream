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
    sfSound_setVolume(m.click, 30);
    m.doorbuffer = sfSoundBuffer_createFromFile("music/door.ogg");
    m.door = sfSound_create();
    sfSound_setBuffer(m.door, m.doorbuffer);
    m.pafbuffer = sfSoundBuffer_createFromFile("music/paf.ogg");
    m.paf = sfSound_create();
    sfSound_setVolume(m.paf, 5);
    sfSound_setBuffer(m.paf, m.pafbuffer);
    sfMusic_setLoop(m.back, sfTrue);
    return (m);
}
