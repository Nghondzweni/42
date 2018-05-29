/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 14:04:30 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/28 23:16:36 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	npos;
	unsigned int	hpos;
	size_t			nlen;

	npos = 0;
	hpos = 0;
	nlen = ft_strlen(needle);
	if (nlen == 0)
	{
		return ((char*)haystack);
	}
	while (haystack[hpos] && hpos < len)
	{
		npos = 0;
		while (needle[npos] == haystack[npos + hpos])
		{
			if (npos == (nlen - 1))
			{
				return ((char *)haystack + hpos);
			}
			npos++;
		}
		hpos++;
	}
	return (NULL);
}
