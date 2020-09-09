/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 15:25:02 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/07 16:35:36 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0' - 1;
	while (i++ <= '9')
	{
		j = i;
		while (j++ <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				k++;
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
