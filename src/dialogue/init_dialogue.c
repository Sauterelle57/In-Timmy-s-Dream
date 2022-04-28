/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** init_dialogue
*/

#include "dialogue.h"
#include "includes.h"

char* open_text()
{
    char *buffer;
    int fd = open("all_dialogue.txt", O_RDONLY);
    int count = 0;
    char* temp = malloc(sizeof(char) * 1);

    for (; (read(fd, temp, 1) > 0); ++count);
    close(fd);
    fd = open("all_dialogue.txt", O_RDONLY);
    buffer = malloc(sizeof(char) * (count + 1));
    if (fd == -1 || count == 0 || buffer == NULL)
        return (NULL);
    read(fd, buffer, count);
    buffer[count] = '\0';
    close(fd);
    return (buffer);
}

void init_dialogue(dialogue_t *tt, game_t *gt)
{
    gt->t.clock = sfClock_create();
    tt->font = sfFont_createFromFile("other/dialogue.ttf");
    tt->text = sfText_create();
    tt->dialogue_pos = (sfVector2f){400, 250};
    sfText_setFont(tt->text, tt->font);
    sfText_setCharacterSize(tt->text, 35);
    sfText_setFillColor(tt->text, sfRed);
    sfText_setPosition(tt->text, tt->dialogue_pos);
    tt->tab_text = my_str_to_word_array(open_text(), '\n');
    tt->is_showing = 0;
    tt->is_passed = 0;
}
