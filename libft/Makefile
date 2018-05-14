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

OBJS = $(%.c : %.o)

all:
	$(CC) -c $(OBJS) $(SRCS) $(DEPS) main.c
	ar rc $(NAME) *.o
	$(CC) $(CFLAGS) *.o -o prog
clean:
	rm -f *.o
fclean:	clean
	rm -f $(NAME)
re:	fclean all
