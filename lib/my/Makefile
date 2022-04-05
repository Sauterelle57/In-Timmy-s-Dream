##
## EPITECH PROJECT, 2021
## lib Makefile
## File description:
## Makefile
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

CFLAGS = -g

SRC	=	my_swap.c	\
		my_isneg.c	\
		my_nblen.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_getnbr.c	\
		my_strcpy.c	\
		my_revstr.c	\
		my_strdup.c	\
		my_strstr.c	\
		my_strcmp.c	\
		my_strcat.c	\
		my_strncpy.c	\
		my_showstr.c	\
		my_showmem.c	\
		my_strncat.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_strncmp.c	\
		my_is_prime.c	\
		my_free_tab.c	\
		my_str_isnum.c	\
		my_strupcase.c	\
		my_int_to_str.c	\
		my_strlowcase.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isupper.c	\
		my_strcapitalize.c	\
		my_sort_int_array.c	\
		my_find_prime_sup.c	\
		my_show_word_array.c	\
		my_str_isprintable.c	\
		my_printf/disp_flag.c	\
		my_printf/get_flags.c	\
		my_printf/converter.c	\
		my_str_to_word_array.c	\
		my_compute_power_rec.c	\
		my_printf/disp_flag2.c	\
		my_printf/disp_flag3.c	\
		my_printf/sum_numbers.c	\
		my_compute_square_root.c\

OBJ =	$(SRC:.c=.o)

%.o: %.c
	@gcc -o $@ -c $< $(CFLAGS)
	@printf "\t${CYAN}%s\n${END}" $<

NAME =	libmy.a

all:	$(NAME)

$(NAME): header $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@printf "\n"

header:
	@printf "${IWHITE}                ${BOLD}${CYAN}LIB                     \
	${END}\n"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean all fclean re
