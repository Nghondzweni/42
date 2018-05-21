#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int	i;
	size_t	x;

	x = 0;
	i = ft_strlen(dest +1);
	i++;
	while(src[x] != '\0'  &&  x < n)
	{
		dest[i] = src[x];

		i++;
		x++;
	}
	return(dest);
}
