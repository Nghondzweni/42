#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	int	i;

	i = 0;
	newstr = ft_strnew(len - start);
	if(newstr == NULL)
	{
		return(NULL);
	}
	while(s[start] && start < len)
	{
		newstr = s[start];
		start++;
		i++;
	}
	newstr[i] = '\0';
	return(newstr);
}
