/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 16:14:32 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/21 12:20:26 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt;

	if (nb <= 0)
	{
		return (0);
	}
	sqrt = 1;
	if (nb >= 2000000)
		sqrt = 1400;
	if (nb >= 1000000)
		sqrt = 999;
	if (nb >= 500000)
		sqrt = 700;
	if (nb >= 100000)
		sqrt = 300;
	while (sqrt * sqrt < nb)
	{
		sqrt++;
	}
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

int		main()
{
	printf("%d", ft_sqrt(9));
}
