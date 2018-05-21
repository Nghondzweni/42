#include "libft.h"

void	ft_striter(char *str, void(*f) (char*))
{
	if(s && f)
	{
		while(s)
		{
			f(*s);
			s++;
		}
	}
}
