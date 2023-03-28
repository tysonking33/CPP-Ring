NAME = Array

SRCS =	./sources/main.cpp \

OBJS = $(SRCS:cpp=o)

CC = g++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = ./includes/Bureaucrat.h ./includes/Form.h

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean