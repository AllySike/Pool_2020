/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 08:40:07 by kgale             #+#    #+#             */
/*   Updated: 2020/08/18 08:40:09 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	if (base[0] == '\0')
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

int		ft_back_to_base10(char *nbr, char *base)
{
	int	output;
	int	i;
	int	j;
	int length;
	int l;

	length = ft_strlen(base);
	l = 1;
	i = 0;
	output = 0;
	i = ft_strlen(nbr) - 1;
	while (i > 0)
	{
		j = length - 1;
		while (j >= 0)
		{
			if (nbr[i] == base[j])
			{
				output = output + l * j;
				l = l * length;
			}
			j--;
		}
		i--;
	}
	return (output);
}

int		ft_atoi(char *str)
{
	int minus;
	int output;
	int numb;

	minus = 1;
	numb = 0;
	output = 0;
	while (*str)
	{
		if (*str == '-' && numb == 0)
			minus *= -1;
		else if (*str <= '9' && *str >= '0')
		{
			numb = 1;
			output = output * 10 + (*str - 48);
		}
		else if ((numb == 1 && !(*str <= '9' && *str >= '0'))
		|| (*str == ' ' && (*(str - 1) == '+' || *(str - 1) == '-'))
		|| (*str != ' ' && *str != '+' && *str != '-'))
			return (minus * output);
		str++;
	}
	return (minus * output);
}

int		ft_atoi_base(char *str, char *base)
{
	int		output;

	output = 0;
	if (ft_check(base) == 1)
	{
		output = ft_back_to_base10(str, base);
	}
	return (output);
}
