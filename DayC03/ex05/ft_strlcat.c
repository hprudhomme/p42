/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:32:46 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/18 20:05:15 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	while (dest[i])
	{
		l++;
		i++;
	}
	if (size < l || size == 0)
		return (0);
	j = 0;
	while (j < size - l - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (l + j);
}
