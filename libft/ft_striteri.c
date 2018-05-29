/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:52:33 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/29 04:08:25 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (str && f)
	{
		while (str[i])
		{
			f(i, str);
			str++;
			i++;
		}
	}
}
