#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *str;
	size_t	i;

	i = 0;
	str = s;
	while(i < n)
	{
		str[i] = c;
		i++;
	}
	return(s);
}
