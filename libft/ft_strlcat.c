#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t slen;
	size_t dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;

	if(size < dlen)
	{
		return(size + slen);
	}
	while(src[i] != '\0' && (dlen + i + 1) < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return(dlen + slen);
}
