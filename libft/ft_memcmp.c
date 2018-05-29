/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:00:16 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/29 03:23:36 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const char	*str1;
	const char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < n)
	{
		if (str1[i] < str2[i])
		{
			return (-42);
		}
		if (str1[i] > str2[i])
		{
			return (42);
		}
	}
	return (str1[i] - str2[i]);
}
