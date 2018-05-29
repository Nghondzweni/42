/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:20:57 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/29 04:06:46 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*newstr;
	size_t	len;

	while (*s && (*s == ' ' || *s == '\t' || *s == '\n'))
	{
		s++;
	}
	len = ft_strlen(s) - 1;
	while (*s && (s[len] == ' ' || s[len] == '\t' || s[len] == '\n'))
	{
		len--;
	}
	if (!(newstr = ft_strnew(len)))
	{
		return (NULL);
	}
	ft_strncpy(newstr, s, len);
	return (newstr);
}
