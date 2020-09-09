/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nirichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 00:41:59 by nirichel          #+#    #+#             */
/*   Updated: 2019/06/26 03:18:57 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);
struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
 
int main(int ac, char **av)
{
	printf("debut");
	ft_show_tab(ft_strs_to_tab(ac, av));
	return (0);
}
