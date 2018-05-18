/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 14:04:30 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/18 17:28:03 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	npos;
	int hpos;
	char	*hptr;
	size_t	nlen;

	npos = 0;
	hpos = 0;
	nlen = ft_strlen(needle);
	hptr = (char*)haystack;

	if(nlen == 0)
	{
		return(NULL);
	}
	while(haystack)
	{
		npos = 0;
		while(needle[npos] == hptr[hpos])
		{
			if((size_t)npos == nlen - 1)
			{
				return((char *)haystack);
			}
			npos++;
		}
		hpos++;
	}
	return(NULL);
}
