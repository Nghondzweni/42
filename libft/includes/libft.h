#ifndef _LIBFT_H_
#	define _LIBFT_H_

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

size_t ft_strlen(const char *str);

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

void ft_div_mod(int a, int b, int *div, int *mod){
	*div = a/b;
	*mod = a%b;	
}

void	ft_ultimate_div_mod(int *a, int *b){
	int tmpa;

	tmpa = 0;


	tmpa = *a;

	*a = *a / *b;
	*b = tmpa % *b;
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

char	*ft_strrev(char *str)
{
	char	k;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i -= 1;
	while (j < i)
	{
		k = str[j];
		str[j] = str[i];
		str[i] = k;
		i--;
		j++;
	}
	return (str);
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
