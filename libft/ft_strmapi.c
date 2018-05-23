#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	int	i;
	char	*newstr;
	
	i = 0;
	newstr = ft_strnew(ft_strlen(s));
	if(!newstr)
	{
		return(NULL);
	}
	if(s && f)
	{
		while(s[i])
		{
			newstr[i] = (*f)(i,s[i]);
			i++;
		}
		return(newstr);
	}
	return(NULL);
}
