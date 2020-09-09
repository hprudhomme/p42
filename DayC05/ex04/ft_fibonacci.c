/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 20:13:53 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/20 19:49:16 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int x;

	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
