#include "libft.h"

int ft_isalpha(int c)
{
	if(ft_isupper(c) != 0 || ft_islower(c) != 0)
	{
		return(42);
	}
	return(0);
}
