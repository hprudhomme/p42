/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 13:04:59 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/25 20:02:37 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size_words(int size, char **str)
{
	int size_words;
	int i;
	int z;

	i = 0;
	z = 0;
	size_words = 0;
	while (i < size)
	{
		while (str[i][z])
			z++;
		size_words += z;
		z = 0;
		i++;
	}
	return (size_words);
}

int		size_sep(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		z;

	if (size == 0)
		return (tab = "");
	if(!(tab = malloc(sizeof(char) * (size_words(size, strs) + size_sep(sep) *
				(size - 1) + 1))))
		return (NULL);
	i = -1;
	z = 0;
	j = 0;
	while (++i < size)
	{
		while (strs[i][z])
			tab[j++] = strs[i][z++];
		z = 0;
		while (sep[z] && i < size - 1)
			tab[j++] = sep[z++];
		z = 0;
	}
	tab[j] = '\0';
	return (tab);
}
