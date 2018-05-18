#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char *new;
	int i;

	i = 0;

	new = (char *) malloc (sizeof(s));
	while(s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	return(new);
}
