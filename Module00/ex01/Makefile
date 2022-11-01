SRCS = phonebook.cpp contact.cpp

CC = g++
NAME = phonebook

CFLAG = -Wall -Wextra -Werror -std=c++98

HEADER = phonebook.hpp contact.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all