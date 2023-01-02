SRCS = Zombie.cpp main.cpp zombieHorde.cpp 

CC = c++
NAME = Zombie

CFLAG = -Wall -Wextra -Werror -std=c++98

HEADER = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all