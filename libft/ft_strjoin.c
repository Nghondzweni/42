#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*newstr;
	size_t	newlen;
	int	i;

	newlen = ft_strlen(s1) + ft_strlen(s2);
	newstr = ft_strnew(newlen);
	if(newstr == NULL)
	{
		return(NULL);
	}
	ft_strcpy(newstr, s1);
	ft_strcat(newstr, s2);
	return(newstr);
}
