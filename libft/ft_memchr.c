#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	unsigned char	*ptr;
	unsigned char	*cptr;

	sptr = (unsigned char *)s;
	cptr = (unsigned char *)c;
	while(i < n)
	{
		if(cptr == sptr[i])
		{
			return(s + i);
		}
		i++;
	}
	return(NULL);
}
