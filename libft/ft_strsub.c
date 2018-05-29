/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:20:04 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/29 03:57:44 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = ft_strnew(len - start);
	if (!newstr[i])
	{
		return (NULL);
	}
	while (s[start] && start < len)
	{
		newstr[i] = s[start];
		start++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
