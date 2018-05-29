/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 14:12:33 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/28 23:16:52 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = (ft_strlen(s) - 1);
	while (s[len])
	{
		if (s[len] == (char)c)
		{
			s += (int)len;
			return ((char *)s);
		}
		len--;
	}
	return (NULL);
}
