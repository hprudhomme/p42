/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 22:10:42 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/24 00:42:28 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_atoi(char *str, char *base)
{
	int n;
	int res;
	int i;
	int j;
	char *tab;
	int z;
	int v;
	int base_length;

	n = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\a' || str[i] == '\b' || str[i]
			== '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = n * (-1);
		i++;
	}
	res = 0;
	base_length = strlen(base);
	while (str[i] >= base[0] && str[i] <= base[])
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	res = res * n;
	return (res);
}

int	main()
{
	char *str;
	char *base;
	int o = 5CA;
	
	printf("%d", o);
	str = "   +-+-5CAaft64";
	base = "0123456789ABCDEF";
//	printf("%s", ft_atoi(str, base));
}
