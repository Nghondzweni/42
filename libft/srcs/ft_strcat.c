#include <string.h>

size_t	strlen(const char *s);
void	ft_putnbr(int n);
char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	x;
	
	i = strlen(dest+1);
	x = 0;
	i++;

	while(src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	return(dest);
}
