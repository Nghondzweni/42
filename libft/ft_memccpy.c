#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	d = (unsigned char *)dest;
	while(i < n)
	{
		d[i] = s[i];
		if(s[i] == c)
		{
			return((void *)dest + i + 1);
		}
		i++;
	}
	return(NULL);
}
