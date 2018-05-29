/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 21:55:58 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/28 23:07:16 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	size_t	x;

	x = 0;
	i = ft_strlen(dest + 1);
	i++;
	while (src[x] != '\0' && x < n)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	return (dest);
}
