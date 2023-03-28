NAME = Phonebook

SRCS = ./sources/Contact.cpp \
		./sources/Phonebook.cpp \
		./sources/main.cpp \

OBJS = $(SRCS:cpp=o)

CC = g++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = ./includes/Megaphone.h ./includes/Contact.h


all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean