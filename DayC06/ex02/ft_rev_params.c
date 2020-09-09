/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 17:24:42 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/20 17:30:25 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	j = 0;
	while (i != 0)
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i--;
		j = 0;
		ft_putchar('\n');
	}
	return (0);
}
