#ifndef _LIBFT_H_
#	define _LIBFT_H_

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);

void ft_putchar(char c){
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n >= 10)
			ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}

int	ft_atoi(char *str)
{
	int i;
	int nbr;
	int ngv;

	i = 0;
	nbr = 0;
	ngv = 0;
	if (str[i] == '-')
	{
		ngv = 1;
		i++;
	}
	while (str[i] != '\0')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (ngv == 1)
	{
		return (-nbr);
	}
	else
		return (nbr);
}


#endif
