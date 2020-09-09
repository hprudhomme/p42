/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:36:15 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/11 14:44:46 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int t;
	int count;

	count = 0;
	while (count < size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				t = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = t;
			}
			i++;
		}
		count++;
	}
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
}

int main()
{
	int size = 4;
	int tab[4];
	tab[0] = 3;
	tab[1] = 1;
	tab[2] = 9;
	tab[3] = 7;

	ft_sort_int_tab(tab, size);
	return 0;
}