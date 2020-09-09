/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 13:08:36 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/20 18:51:24 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			check_base(char *base)
{
	int i;
	int z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] == 127)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

long int	ft_nb_neg(long int nb)
{
	ft_putchar('-');
	return (-nb);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int			size_base;
	int			nbr_final[100];
	int			i;
	long	int	nb;

	i = 0;
	size_base = 0;
	if (check_base(base))
	{
		nb = nbr;
		if (nb == 0)
			ft_putchar(nb + 48);
		if (nb < 0)
			nb = ft_nb_neg(nb);
		while (base[size_base])
			size_base++;
		while (nb)
		{
			nbr_final[i] = base[nb % size_base];
			nb = nb / size_base;
			i++;
		}
		while (i-- > 0)
			ft_putchar(nbr_final[i]);
	}
}
