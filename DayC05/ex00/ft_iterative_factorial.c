/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 16:07:54 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/20 19:12:49 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int j;
	int nbr;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = 1;
	nbr = nb;
	while (i < nb)
	{
		nbr = i * nbr;
		i++;
	}
	return (nbr);
}
