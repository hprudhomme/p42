/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 23:12:13 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/26 02:47:50 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long int nbr;

	nbr = nb;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		nbr = 2147483648;
	}
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	else
	{
		ft_putchar(nbr % 10 + 48);
	}
}

void 	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i])
	{
		ft_putstr(par[i].str);
		write(1, \n, 1);
		ft_putnbr(par[i].size);
		write(1, \n, 1);
		ft_putstr(par[i].copy);
		write(1, \n, 1);
		i++;
	}
}
