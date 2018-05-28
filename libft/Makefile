NAME	= libft.a
#CFLAGS	= -Wall -Wextra -Werror#
CC = gcc
SRCS = ft_strlen.c\
	ft_strdup.c\
	ft_strcpy.c\
	ft_strncpy.c\
	ft_strncat.c\
	ft_strcat.c\
	ft_strcmp.c\
	ft_strncmp.c\
	ft_strchr.c\
	ft_strstr.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_isupper.c\
	ft_islower.c\
	ft_atoi.c\
	ft_memset.c\
	ft_strlcat.c\
	ft_strsplit.c


OBJS = $(SRCS:.c=.o)

LIB  = ar rc

all:

	$(CC)  $(SRCS) main.c
	$(LIB) $(NAME)
clean:
	rm -f $(OBJS)
fclean:	clean
	rm -f $(NAME)
re:	fclean all
