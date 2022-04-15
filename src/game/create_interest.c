/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** create_interest
*/

#include "includes.h"
#include "game.h"

interest_t *create_all_interests(interest_t *interest)
{
    interest[0] = create_interest(BAT[0], (sfIntRect){0, 0, 48, 48}, //chauve souris
    (sfVector2f){940, 540}, &go_combat);
    interest[1] = create_interest(NPC[0], (sfIntRect) //sorciere
    {0, 0, 48, 70}, (sfVector2f){2000, 500}, &example);
    interest[2] = create_interest("other/blue_block.png", (sfIntRect) //porte maison vampire
    {0, 0, 60, 70}, (sfVector2f){3750, 320}, &go_vampire);
    interest[3] = create_interest("other/blue_block.png", (sfIntRect) //porte maison haut 1
    {0, 0, 60, 70}, (sfVector2f){5220, 440}, &example);
    interest[4] = create_interest("other/blue_block.png", (sfIntRect) //porte maison haut 2
    {0, 0, 60, 70}, (sfVector2f){5740, 440}, &example);
    interest[5] = create_interest("other/blue_block.png", (sfIntRect) //porte maison bas 1
    {0, 0, 60, 70}, (sfVector2f){5460, 980}, &example);
    interest[6] = create_interest("other/blue_block.png", (sfIntRect) //porte maison bas 2
    {0, 0, 60, 70}, (sfVector2f){6010, 970}, &example);
    interest[7] = create_interest("other/blue_block.png", (sfIntRect) //panneau spawn
    {0, 0, 40, 60}, (sfVector2f){4030, 760}, &example);
    interest[8] = create_interest("other/blue_block.png", (sfIntRect) //porte maison hantée bas
    {0, 0, 60, 70}, (sfVector2f){7480, 1000}, &example);
    interest[9] = create_interest("other/blue_block.png", (sfIntRect) //porte maison hantée milieu
    {0, 0, 60, 70}, (sfVector2f){7450, 580}, &example);
    interest[10] = create_interest("other/blue_block.png", (sfIntRect) //porte maison hantée haut 1
    {0, 0, 60, 70}, (sfVector2f){6925, 140}, &example);
    interest[11] = create_interest("other/blue_block.png", (sfIntRect) //porte maison hantée haut 2
    {0, 0, 60, 70}, (sfVector2f){7440, 120}, &example);
    interest[12] = create_interest("other/blue_block.png", (sfIntRect) //porte maison hantée haut 3 avec citrouilles
    {0, 0, 60, 70}, (sfVector2f){7940, 125}, &go_ghost);
    interest[13] = create_interest("other/blue_block.png", (sfIntRect) //panneau tout en haut du chemin
    {0, 0, 40, 60}, (sfVector2f){7850, -2130}, &example);
    interest[14] = create_interest("other/blue_block.png", (sfIntRect) //porte maison hantée avec jardin
    {0, 0, 60, 70}, (sfVector2f){6600, -390}, &example);
    interest[15] = create_interest("other/blue_block.png", (sfIntRect) //entrée grotte foret
    {0, 0, 60, 70}, (sfVector2f){6480, -1280}, &go_forest);
    interest[16] = create_interest("other/blue_block.png", (sfIntRect) //cercueil niveau final
    {0, 0, 80, 110}, (sfVector2f){5630, -2310}, &example);
    return (interest);
}
