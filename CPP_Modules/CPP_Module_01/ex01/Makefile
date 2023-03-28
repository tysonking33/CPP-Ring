NAME = Zombie_Horde

SRCS =	./sources/ZombHorde_main.cpp \
		./sources/zombieHorde.cpp \
		./sources/newZombie.cpp \
		./sources/randomChump.cpp \
		./sources/Zombie.cpp \

OBJS = $(SRCS:cpp=o)

CC = g++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = ./includes/Zombie.h

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean