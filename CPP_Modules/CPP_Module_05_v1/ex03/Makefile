NAME = Bureaucrat_N_LilBabyForms_PlusInternPlebs

SRCS =	./sources/Bureaucrat.cpp \
		./sources/PresidentialPardonForm.cpp \
		./sources/RobotomyRequestForm.cpp \
		./sources/ShrubberyCreationForm.cpp \
		./sources/AForm.cpp \
		./sources/main.cpp \
		./sources/Intern.cpp \

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