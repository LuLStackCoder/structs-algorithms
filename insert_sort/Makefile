CC = gcc
FLAGS = -Wall -Wextra -Werror -I
SRCS = ./src/main.c ./src/insert_sort.c
INCLUDES = ./include/
NAME = insert_sort

all:
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
