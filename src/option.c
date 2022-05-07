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
	my_putstr("  ./my_rpg\n");
	my_putstr("\nOPTIONS\n");
	my_putstr("  -h write the helpers\n");
	my_putstr("\nUSER INTERACTIONS\n");
	my_putstr("LEFT_KEY OR Q go left.\n");
	my_putstr("RIGHT_KEY OR R go right.\n");
	my_putstr("UP_KEY OR Z go top.\n");
	my_putstr("DOWN_KEY OR S go bottom.\n");
	my_putstr("ESCAPE_KEY quit\n");
	my_putstr("BAR_KEY OR E interact.\n");
}
