/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 13:24:39 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/20 15:55:48 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int n;
	int res;
	int i;

	n = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\a' || str[i] == '\b' || str[i]
	== '\t' || str[i] == '\n' || str[i] == '\v' ||
	str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = n * (-1);
		i++;
	}
	res = 0;
	while (str[i] >= (0 + 48) && str[i] <= (9 + 48))
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	res = res * n;
	return (res);
}
