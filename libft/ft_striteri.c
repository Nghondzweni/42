#include "libft.h"

void	ft_striteri(char *str, void(*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if(s && f)
	{
		while(s[i])
		{
			f(i,s);
			s++;
			i++;
		}
	}
}
