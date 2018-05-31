/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:16:54 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/28 23:17:24 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wcount(char const *s, char c)
{
	
	int	wcount;
	
	wcount = 0;
		
	//get number of words and check for delimiter
	while(str[i])
	{
		if(str[i] ==(char) c && str[i+1] && str[1 + i] != c)
		 {
			if(
			wcount++;
			ft_putchar(str[i]);
		 }
		 i++;
	}
	return(wcount);

}
