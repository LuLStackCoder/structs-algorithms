CC = gcc
FLAGS = -Wall -Wextra -Werror -I
SRCS = ./src/*.c
INCLUDES = ./include/
NAME = str_lin_search

all:
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
