#include "libft.h"

int ft_tolower(int c)
{
	if(ft_isupper(c) != 0)
	{
		c += 32;
	}
	return(c);
}
