/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 22:21:38 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/26 02:18:11 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(*str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		strl;
	char	*str;

	strl = ft_strlen(src);
	if (!(str = malloc(sizeof(char) * strl)))
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str *tab;

	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);		
		i++;
	}
	tab[i].size = "";
	tab[i].str = '\0';
	tab[i].copy = "";
}

int		main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
	return(0);
}
