

# Variables
NAME = libft.a # Library name
CC = gcc # Compiler
CCFLAGS = -Wall -Wextra -Werror # Compiler flags
RM = rm -f
SRCS = ft_isalnum.c \
		ft_isdigit.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c

OBJS = $(SRCS:.c=.o) # Object Files

# Rules
all : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all	
.PHONY: all clean fclean

