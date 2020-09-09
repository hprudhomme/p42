/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 18:33:03 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/19 14:00:27 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int main()
{
	ft_putnbr(2147483647);
}
