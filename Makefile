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
		src/option.c	\
		src/random.c	\
		src/quit_game.c	\
		src/pause_game.c	\
		src/particules.c	\
		src/create_text.c	\
		src/move_sprite.c	\
		src/create_music.c	\
		src/create_struct.c	\
		src/create_attributes.c	\
		src/draw_cursor_and_player.c	\
\
		src/combat/create_maze.c	\
		src/combat/light_type.c		\
		src/combat/life_manage.c	\
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
		src/game/interest_fonction_2.c	\
		src/game/interest_fonction_3.c	\
		src/game/interest_fonction_4.c	\
		src/game/catch_object.c	\
\
		src/main_menu/main_menu.c	\
		src/main_menu/init_menu_elm.c	\
		src/main_menu/fonctions_menu.c	\
\
        src/menu_lose/init_lose.c    \
        src/menu_lose/draw_menu_lose.c    \
        src/menu_lose/event_menu_lose.c    \
        src/menu_lose/init_button_lose.c    \
        src/menu_lose/init_elem_menu_lose.c    \
\
        src/menu_win/init_win.c    \
        src/menu_win/draw_menu_win.c    \
        src/menu_win/event_menu_win.c    \
        src/menu_win/init_button_win.c    \
        src/menu_win/init_elem_menu_win.c    \
\
		src/timmy_room/anim_timmy_room.c	\
        src/timmy_room/init_timmy_room.c	\
        src/timmy_room/draw_timmy_room.c	\
        src/timmy_room/event_timmy_room.c	\
        src/timmy_room/init_elem_timmy_room.c	\
        src/timmy_room/init_button_timmy_room.c	\
\
		src/settings/fonctions_settings.c	\
		src/settings/init_settings_elm.c	\
		src/settings/settings.c				\
		src/settings/button_settings.c	\
\
		src/vampire/anim_vampire.c	\
		src/vampire/draw_vampire.c	\
		src/vampire/event_vampire.c	\
		src/vampire/init_vampire.c	\
		src/vampire/init_elem_vampire.c	\
		src/vampire/init_button_vampire.c	\
		src/vampire/init_interest_vampire.c	\
\
		src/ghost/anim_ghost.c	\
		src/ghost/draw_ghost.c	\
		src/ghost/event_ghost.c	\
		src/ghost/init_ghost.c	\
		src/ghost/init_elem_ghost.c	\
		src/ghost/ghost_collisions.c	\
		src/ghost/init_button_ghost.c	\
		src/ghost/init_interest_ghost.c	\
\
		src/forest/anim_forest.c	\
		src/forest/draw_forest.c	\
		src/forest/event_forest.c	\
		src/forest/init_forest.c	\
		src/forest/init_elem_forest.c	\
		src/forest/forest_collisions.c	\
		src/forest/init_button_forest.c	\
		src/forest/init_interest_forest.c	\
\
		src/inventory/anim_inventory.c	\
		src/inventory/draw_inventory.c	\
		src/inventory/event_inventory.c	\
		src/inventory/init_inventory.c	\
		src/inventory/init_elem_inventory.c	\
		src/inventory/init_button_inventory.c	\
		src/inventory/init_interest_inventory.c	\
\
		src/loading/fonctions_loading.c	\
		src/loading/init_loading_elm.c	\
		src/loading/main_loading.c	\
\
		src/cimetery/anim_cimetery.c	\
		src/cimetery/draw_cimetery.c	\
		src/cimetery/event_cimetery.c	\
		src/cimetery/init_cimetery.c	\
		src/cimetery/init_elem_cimetery.c	\
		src/cimetery/cimetery_collisions.c	\
		src/cimetery/init_button_cimetery.c	\
		src/cimetery/init_interest_cimetery.c	\
\
		src/dialogue/dialogue.c	\
		src/dialogue/init_dialogue.c	\
\
		src/htp/anim_htp.c	\
		src/htp/draw_htp.c	\
		src/htp/event_htp.c	\
		src/htp/init_htp.c	\
		src/htp/init_elem_htp.c	\
		src/htp/tuto_movements.c	\
		src/htp/init_button_htp.c	\
		src/htp/init_interest_htp.c	\
\
		src/pause_menu/main_pause.c	\
		src/pause_menu/init_pause_elm.c	\
		src/pause_menu/fonctions_pause.c

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
