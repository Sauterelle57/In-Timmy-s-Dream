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
\
		src/combat/main_combat.c	\
		src/combat/init_combat_elm.c	\
		src/combat/fonctions_combat.c	\
\
		src/dialogue/main_dialogue.c	\
		src/dialogue/init_dialogue_elm.c	\
		src/dialogue/fonctions_dialogue.c	\
\
		src/game/main_game.c	\
		src/game/draw_game.c	\
		src/game/anim_game.c	\
		src/game/event_game.c	\
		src/game/init_game_elm.c	\
		src/game/player_movements.c \
\
		src/menu/main_menu.c	\
		src/menu/init_menu_elm.c	\
		src/menu/fonctions_menu.c	\

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
