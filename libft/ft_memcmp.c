#include "libft.h"

void	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if(n == 0)
		return(0);
	while(str1[i] == str2[i] && i < n)
	{
		if(str1[i] < str2)
		{
			return(-42);
		}
		if(str1[i] > str2[i])
		{
			return(42);
		}
	}
	return(str1[i] - str2[i]);
}
