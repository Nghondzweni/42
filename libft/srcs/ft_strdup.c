#include <stdlib.h>
size_t	ft_strlen(char *str);

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