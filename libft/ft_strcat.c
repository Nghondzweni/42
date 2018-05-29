/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:22:46 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/29 02:16:07 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	x;

	i = ft_strlen(dest + 1);
	x = 0;
	i++;
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	return (dest);
}
