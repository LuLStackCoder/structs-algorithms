CC = gcc
FLAGS = -Wall -Wextra -Werror -I
SRCS = ./src/main.c ./src/merge_sort.c
INCLUDES = ./include/
NAME = merge_sort

all:
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
