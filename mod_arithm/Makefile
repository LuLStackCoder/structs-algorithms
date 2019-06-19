CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = ./src/bin_pow.c ./src/multiply.c ./src/divide.c ./src/main.c
INCLUDES = ./include
NAME = op

all:
	$(CC) $(FLAGS) -I $(INCLUDES) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all