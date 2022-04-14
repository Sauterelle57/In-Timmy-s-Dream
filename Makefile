##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

GREY   = $ \x1b[30m
RED    = $ \x1b[31m
GREEN  = $ \x1b[32m
YELLOW = $ \x1b[33m
BLUE   = $ \x1b[34m
PURPLE = $ \x1b[35m
CYAN   = $ \x1b[36m
WHITE  = $ \x1b[37m

END    = $ \x1b[0m
BOLD   = $ \x1b[1m
UNDER  = $ \x1b[4m
REV    = $ \x1b[7m

IGREY   = $ \x1b[40m
IRED    = $ \x1b[41m
IGREEN  = $ \x1b[42m
IYELLOW = $ \x1b[43m
IBLUE   = $ \x1b[44m
IPURPLE = $ \x1b[45m
ICYAN   = $ \x1b[46m
IWHITE  = $ \x1b[47m

CFLAGS = -g -I./headers

SRC	=	src/main.c	\
		src/create_text.c	\
		src/move_sprite.c	\
		src/create_struct.c	\
		src/create_attributes.c	\
		src/draw_player.c	\
\
		src/combat/create_maze.c	\
		src/combat/main_combat.c	\
		src/combat/event_combat.c	\
		src/combat/init_combat_elm.c	\
		src/combat/fonctions_combat.c	\
		src/combat/player_combat_movements.c	\
		src/combat/player_combat_collision.c	\
		src/combat/maze_generator/sources/init.c	\
		src/combat/maze_generator/sources/main.c	\
		src/combat/maze_generator/sources/neighbors.c	\
		src/combat/maze_generator/sources/create_file.c	\
		src/combat/maze_generator/sources/linked_list.c	\
		src/combat/maze_generator/sources/it_backtracking.c	\
\
		src/dialogue/main_dialogue.c	\
		src/dialogue/init_dialogue_elm.c	\
		src/dialogue/fonctions_dialogue.c	\
\
		src/game/main_game.c	\
		src/game/draw_game.c	\
		src/game/anim_game.c	\
		src/game/event_game.c	\
		src/game/create_block.c	\
		src/game/init_game_elm.c	\
		src/game/create_block_2.c	\
		src/game/create_block_3.c	\
		src/game/create_interest.c	\
		src/game/player_movements.c \
		src/game/player_collision.c	\
		src/game/interest_fonction.c	\
\
		src/menu/main_menu.c	\
		src/menu/init_menu_elm.c	\
		src/menu/fonctions_menu.c	\
\
		src/vampire/anim_vampire.c	\
		src/vampire/draw_vampire.c	\
		src/vampire/event_vampire.c	\
		src/vampire/init_vampire.c	\
		src/vampire/init_elem_vampire.c	\
		src/vampire/vampire_collisions.c	\
		src/vampire/init_button_vampire.c	\
		src/vampire/init_interest_vampire.c	\
		src/vampire/player_vampire_movements.c	\
\
		src/ghost/anim_ghost.c	\
		src/ghost/draw_ghost.c	\
		src/ghost/event_ghost.c	\
		src/ghost/init_ghost.c	\
		src/ghost/init_elem_ghost.c	\
		src/ghost/ghost_collisions.c	\
		src/ghost/init_button_ghost.c	\
		src/ghost/init_interest_ghost.c	\
		src/ghost/player_ghost_movements.c	\
\
		src/forest/anim_forest.c	\
		src/forest/draw_forest.c	\
		src/forest/event_forest.c	\
		src/forest/init_forest.c	\
		src/forest/init_elem_forest.c	\
		src/forest/forest_collisions.c	\
		src/forest/init_button_forest.c	\
		src/forest/init_interest_forest.c	\
		src/forest/player_forest_movements.c	\
\
		src/inventory/anim_inventory.c	\
		src/inventory/draw_inventory.c	\
		src/inventory/event_inventory.c	\
		src/inventory/init_inventory.c	\
		src/inventory/init_elem_inventory.c	\
		src/inventory/init_button_inventory.c	\
		src/inventory/init_interest_inventory.c	\
		src/inventory/player_inventory_movements.c

OBJ =	$(SRC:.c=.o)

%.o: %.c
	@gcc -o $@ -c $< $(CFLAGS)
	@printf "\t${PURPLE}%s\n${END}"  $<

NAME =	my_rpg

all: $(NAME)

$(NAME): make_lib header $(OBJ)
	@gcc -o $(NAME) $(OBJ) -L./lib/my -lmy -lcsfml-graphics -lcsfml-system \
	-lcsfml-audio -lcsfml-window -lm

header:
	@printf "${IWHITE}               ${BOLD}${PURPLE}FILES                    \
	${END}\n"

make_lib:
	@make -C lib/my --no-print-directory

clean:
	@make clean -C lib/my --no-print-directory
	@printf "${IWHITE}               ${BOLD}${GREY}CLEAN                    \
	${END}\n\n"
	@rm -f $(OBJ)

fclean: clean
	@make fclean -C lib/my --no-print-directory
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, make_lib, header
