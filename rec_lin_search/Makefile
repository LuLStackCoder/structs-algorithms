CC = gcc
FLAGS = -Wall -Wextra -Werror -I
SRCS = ./src/main.c ./src/rec_lin_search.c
INCLUDES = ./include/
NAME = rec_lin_search

all:
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
