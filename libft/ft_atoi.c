#include "libft.h"

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
