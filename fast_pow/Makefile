CC = gcc
FLAGS = -Wall -Wextra -Werror -I
SRCS = ./src/main.c ./src/bin_pow.c ./src/rec_pow.c
INCLUDES = ./include
NAME = fast_pow

all:
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
