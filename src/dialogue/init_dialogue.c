/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** init_dialogue
*/

#include "forest.h"
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

void init_dialogue(game_t *gt)
{
    gt->dialogue.font = sfFont_createFromFile("other/dialogue.ttf");
    gt->dialogue.text = sfText_create();
    gt->dialogue.dialogue_pos = (sfVector2f){400, 250};
    sfText_setFont(gt->dialogue.text, gt->dialogue.font);
    sfText_setCharacterSize(gt->dialogue.text, 35);
    sfText_setFillColor(gt->dialogue.text, sfRed);
    sfText_setPosition(gt->dialogue.text, gt->dialogue.dialogue_pos);
    gt->dialogue.tab_text = my_str_to_word_array(open_text(), '\n');
    gt->dialogue.is_showing = 0;
    gt->dialogue.is_passed = 0;
}
