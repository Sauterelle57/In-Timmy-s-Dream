/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_interest
*/

#include "includes.h"
#include "game.h"
#include "interest.h"

interest_t *create_all_interests_3(interest_t *interest)
{
    interest[12] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){7940, 125}, &go_ghost);
    interest[13] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 40, 60}, (sfVector2f){7850, -2130}, &rick_astley);
    interest[14] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){6600, -390}, &check_dialogue);
    interest[14].line = 16;
    interest[15] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){6480, -1280}, &go_forest);
    interest[16] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 80, 110}, (sfVector2f){5630, -2310}, &check_dialogue);
    interest[16].line = 21;
    interest[17] = create_interest("object/Lighter.png", (sfIntRect)
    {0, 0, 16, 16}, (sfVector2f){7300, 1210}, &catch_lighter);
    Set_Scale(interest[17].body.sprite, 2.5, 2.5);
    interest[18] = create_interest("object/Pickaxe.png", (sfIntRect)
    {0, 0, 16, 16}, (sfVector2f){6228, -2050}, &catch_pickaxe);
    Set_Scale(interest[18].body.sprite, 2.5, 2.5);
    return (interest);
}

interest_t *create_all_interests_2(interest_t *interest)
{
    interest[6] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){6010, 970}, &go_room);
    interest[7] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 40, 60}, (sfVector2f){4030, 760}, &check_dialogue);
    interest[7].line = 17;
    interest[8] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){7480, 1000}, &check_dialogue);
    interest[8].line = 1;
    interest[9] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){7450, 580}, &check_dialogue);
    interest[9].line = 1;
    interest[10] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){6925, 140}, &check_dialogue);
    interest[10].line = 15;
    interest[11] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){7440, 120}, &check_dialogue);
    interest[11].line = 1;
    interest = create_all_interests_3(interest);
    return (interest);
}

interest_t *create_all_interests(interest_t *interest)
{
    interest[0] = create_interest(BAT[(rand() % 3) * 3], (sfIntRect){0, 0, 48,
    48}, (sfVector2f){940, 540}, &go_combat);
    interest[1] = create_interest(NPC[0], (sfIntRect)
    {0, 0, 48, 70}, (sfVector2f){2000, 500}, &check_dialogue);
    interest[1].line = 2;
    interest[2] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){3750, 320}, &go_vampire);
    interest[3] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){5220, 440}, &go_room);
    interest[4] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){5740, 440}, &go_room);
    interest[5] = create_interest("other/blank.png", (sfIntRect)
    {0, 0, 60, 70}, (sfVector2f){5460, 980}, &go_room);
    interest = create_all_interests_2(interest);
    return (interest);
}
