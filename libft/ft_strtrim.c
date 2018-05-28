#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*newstr;
	size_t	len;
	int	i;

	while(*s && (*s == ' ' || *s == '\t' || *s == '\n'))
	{
		s++;
	}
	len = ft_strlen(s) - 1;
	while(*s && (s[len] == ' ' || s[len] == '\t' || s[len] == '\n'))
	{
		len--;
	}
	if(!(strnew = ft_strnew(len)))
	{
		return(NULL);
	}
	ft_strncpy(strnew, s, len);
	return(strnew);
}
