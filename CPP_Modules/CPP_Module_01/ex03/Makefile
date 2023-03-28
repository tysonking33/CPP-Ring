NAME = ABFight

SRCS =	./sources/AandB_main.cpp \
		./sources/HumanA.cpp \
		./sources/HumanB.cpp \
		./sources/Weapon.cpp \

OBJS = $(SRCS:cpp=o)

CC = g++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = ./includes/HumanA.h ./includes/HumanB.h ./includes/Weapon.h


all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean