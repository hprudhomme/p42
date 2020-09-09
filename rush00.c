/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:44:49 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/09 10:56:48 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	top(int l,  int count)
{
	if (count == 0 || count == l - 1)
	{
		ft_putchar('o');
	}else
	{
		ft_putchar('-');
	}
}

void	mid(int l, int h)
{
	char countl;
	char counth;

	countl = 0;
	counth = 0;
	h = h-2;

	while (counth < h)
	{
		while (countl < l)
		{
			if (countl == 0 || countl == l - 1)
			{
				ft_putchar('|');
			}else
			{
				ft_putchar(' ');
			}
			countl++;
		}
		ft_putchar('\n');
		counth++;
		countl = 0;
	}
}

void	bot(int l)
{
	char count;

	count = 0;
	while (count < l)
	{
		if (count == 0 || count == l - 1)
		{
			ft_putchar('o');
		}else
		{
			ft_putchar('-');
		}
		count++;
	}
}

void	function(int l, int h)
{  
	if (l > 0 && h > 0)
	{
		char count;

		count = 0;
		while (count < l)
		{
			top(l, count);
			count++;
		}
		ft_putchar('\n');
		mid(l, h);
		if (h > 1)
		{
			bot(l);
		}
	}
}

int		main(void)
{
	function(1, 5);
	return (0);
}
