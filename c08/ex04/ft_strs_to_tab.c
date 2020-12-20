/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 19:42:39 by kgale             #+#    #+#             */
/*   Updated: 2020/08/22 19:42:42 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char				*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return (count);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		stock[i].str = (char *)malloc(sizeof(char) * ft_strlen(av[i]) + 1);
		stock[i].copy = (char *)malloc(sizeof(char) * ft_strlen(av[i]) + 1);
		if (stock[i].str && stock[i].copy)
		{
			ft_strcpy(stock[i].str, av[i]);
			ft_strcpy(stock[i].copy, stock[i].str);
			stock[i].size = ft_strlen(av[i]);
		}
		else
		{
			stock[i].str = NULL;
			stock[i].size = 0;
			stock[i].copy = NULL;
		}
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
