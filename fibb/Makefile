CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = ./src/main.c ./src/pol_fib.c ./src/rec_fib.c ./src/log_fib.c
INCLUDES = ./include/
NAME = fibb

all:
	$(CC) $(FLAGS) -I $(INCLUDES) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
