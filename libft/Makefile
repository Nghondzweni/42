NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
CC = gcc
SRCS = srcs/ft_strlen.c\
	srcs/ft_strdup.c\
	srcs/ft_strcpy.c\
	srcs/ft_strncpy.c\
	srcs/ft_strncat.c\
	srcs/ft_strcat.c\
	srcs/ft_strcmp.c\
	srcs/ft_strncmp.c\
	srcs/ft_strchr.c\

DEPS =	includes/libft.h

OBJS = $(%.c=%.o)

all:
	$(CC) $(CFLAGS) $(SRCS) $(DEPS) main.c
	ar rc $(NAME)
clean:
	rm -f *.o
fclean:	clean
	rm -f $(NAME)
re:	fclean all
