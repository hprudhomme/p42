/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:28:27 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/12 18:59:32 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int t;

	i = - 1;
	j = size;
	while (++i < --j)
	{
		t = tab[i];
		tab[i] = tab[j];
		tab[j] = t;
	}
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
	return (tab);
	
}

int main()
{
	int size = 4;
	int tab[4];
	tab[0] = 3;
	tab[1] = 1;
	tab[2] = 9;
	tab[3] = 7;

	printf("%d\n", ft_rev_int_tab(tab, size));
	return 0;
}