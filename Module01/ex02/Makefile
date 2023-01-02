SRCS = main.cpp

CC = c++
NAME = Zombie

CFLAG = -Wall -Wextra -Werror -std=c++98

NAME = program

OBJS = $(SRCS:.cpp=.o)

all:
	$(CC) $(CFLAG) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all