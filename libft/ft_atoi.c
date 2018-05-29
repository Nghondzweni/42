/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:14:40 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/29 02:45:51 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int i;
	int nbr;
	int ngv;

	i = 0;
	nbr = 0;
	ngv = 0;
	if (str[i] == '-')
	{
		ngv = 1;
		i++;
	}
	while (str[i] != '\0')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (ngv == 1)
	{
		return (-nbr);
	}
	else
		return (nbr);
}
