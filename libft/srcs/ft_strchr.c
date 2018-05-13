#include <string.h>

void	ft_putchar(char c);

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char*)s;
	if (s)
	{
		while (*tmp != c && *tmp)
			tmp++;
		if (*tmp != c)
			return (NULL);
	}
	return (tmp);
}
