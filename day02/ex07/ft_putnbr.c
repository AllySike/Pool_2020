/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 17:57:46 by kgale             #+#    #+#             */
/*   Updated: 2020/08/13 20:56:27 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		started;
	int		doz;
	char	num;

	doz = 1000000000;
	started = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb / -1;
	}
	if (nb == 0)
		write(1, "0", 1);
	while (doz > 0)
	{
		if (started == 0 && nb / doz != 0)
			started = 1;
		if (started == 1)
		{
			num = nb / doz + '0';
			write(1, &num, 1);
		}
		nb = nb % doz;
		doz = doz / 10;
	}
}
