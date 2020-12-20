/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 22:49:55 by kgale             #+#    #+#             */
/*   Updated: 2020/08/22 22:49:59 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	str[10];
	int		i;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		i = 0;
		if (nb < 0)
		{
			nb = nb * -1;
			ft_putchar('-');
		}
		while (nb || (nb == 0 && i == 0))
		{
			str[i++] = (nb % 10) + '0';
			nb = nb / 10;
		}
		while (i >= 0)
		{
			ft_putchar(str[i - 1]);
			i--;
		}
	}
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}
