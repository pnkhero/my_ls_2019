##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC =	main.c				\
		my_putchar.c		\
		my_putstr.c			\
		my_putnbr.c			\
		my_strcmp.c			\
		my_strlen.c

OBJ = $(SRC:.c=.o)

NAME = my_ls

CFLAGS = -g3

all: $(NAME)

$(NAME):   $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
