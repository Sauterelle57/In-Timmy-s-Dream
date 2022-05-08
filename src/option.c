/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** option
*/

#include "includes.h"
#include "game.h"

void flag_h(void)
{
    my_putstr("RPG by E-Game 2022\n");
    my_putstr("\nUSAGE\n");
    my_putstr("./my_rpg [-h, -easy]\n");
    my_putstr("\nOPTIONS\n");
    my_putstr("\t-h\twrite this helper\n");
    my_putstr("\t-easy\tload game with difficulty null\n");
    my_putstr("\nUSER INTERACTIONS\n");
    my_putstr("\tLEFT_KEY or Q\t\tgo left\n");
    my_putstr("\tRIGHT_KEY or R\t\tgo right\n");
    my_putstr("\tUP_KEY or Z\t\tgo top\n");
    my_putstr("\tDOWN_KEY or S\t\tgo bottom\n");
    my_putstr("\tS\t\tsprint mode on/off\n");
    my_putstr("\tESCAPE_KEY\t\tpause menu\n");
    my_putstr("\tSPACE_KEY or E\t\tinteract\n");
}
