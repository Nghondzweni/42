/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:45:10 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/29 02:15:50 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)malloc(sizeof(s));
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}
