/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 20:47:03 by kgale             #+#    #+#             */
/*   Updated: 2020/08/17 20:47:07 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	if (c != '\0')
		write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int		ft_check(char *base)
{
	int	is_base;
	int	i;
	int j;

	is_base = 1;
	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
		|| !(base[i] >= ' ' && base[i] <= '~'))
			return (0);
		j = i + 1;
		while (base[j] != '\0' && j > i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (is_base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		length;
	int		str[1000];
	int		i;
	int		number;

	if (ft_check(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * -1;
		}
		i = 0;
		number = nbr;
		length = ft_strlen(base);
		while (number || (i == 0 && number == 0))
		{
			str[i] = number % length;
			number = number / length;
			i++;
		}
		length = i - 1;
		while (length >= 0)
			ft_putchar(base[str[length--]]);
	}
}
