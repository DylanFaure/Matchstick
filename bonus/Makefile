##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles libmy
##

SRC	=	src/main.c	\
		src/squaremap.c	\
		src/filled_map.c	\
		src/matchstick.c	\
		src/verif_nb_line.c	\
		src/player_line.c	\
		src/verif_nb_match.c	\
		src/player_match.c	\
		src/verif_change_map.c	\
		src/change_map.c	\
		src/player_remove.c	\
		src/your_turn.c	\
		src/print_map.c	\
		src/verif_end.c	\
		src/verif_ai_line.c	\
		src/ai_line.c	\
		src/ai_match.c	\
		src/ai_remove.c	\
		src/ai_turn.c	\
		lib/my/my_getnbr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_put_nbr.c

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -g -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.phony:	all clean fclean re
