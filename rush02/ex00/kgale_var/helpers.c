/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 01:19:23 by kgale             #+#    #+#             */
/*   Updated: 2020/08/30 19:34:07 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int					ft_strcmp(const char *s1, const char *s2);

int					ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char				*ft_putnbr(long int nb)
{
	char	str[18];
	char	*out;
	int		i;
	int		j;

	i = 0;
	out = (char*)malloc(sizeof(char) * 18);
	while (nb || (i == 0))
	{
		str[i] = (nb % 10) + '0';
		nb = (long int)nb / 10;
		i++;
	}
	j = 0;
	while (i > 0)
	{
		out[j] = str[--i];
		j++;
	}
	return (out);
}

void				ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

unsigned long long	ft_atoi(char *str)
{
	unsigned long long	output;
	int					i;

	output = 0;
	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		output = output * 10 + (str[i] - 48);
		i++;
	}
	return (output);
}

char				*ft_find(t_dict *list, char *str)
{
	int	i;

	i = 0;
	printf("%s", str);
	while (list[i].nums)
	{
		if (!ft_strcmp(str, &(*list[i].nums)))
		{
			return (list[i].letters);
		}
		i++;
	}
	return (0);
}
