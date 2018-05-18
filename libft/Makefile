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
	srcs/ft_strstr.c\

DEPS = -I includes/libft.h

OBJS = $(SRCS:.c=.o)

LIB  = ar rc

all: $(NAME)

	$(CC) $(CFLAGS) $(SRCS) main.c $(DEPS)
	$(LIB)  $(NAME)
clean:
	rm -f $(OBJS)
fclean:	clean
	rm -f $(NAME)
re:	fclean all
