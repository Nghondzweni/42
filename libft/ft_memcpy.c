/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:26:29 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/29 03:32:49 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t		i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n)
	{
		d[i] = s[i];
		n--;
	}
	return (dest);
}
