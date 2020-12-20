/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 16:58:19 by kstephai          #+#    #+#             */
/*   Updated: 2020/09/02 20:51:54 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_str_mistakes.h"
#include <unistd.h>
#include "../includes/ft_str.h"
#include "../includes/ft_valid_2.h"

int	ft_atoi(char *str)
{
	int	number;
	int	i;

	number = 0;
	i = 0;
	while (str[i + 3] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (str[0] == '0')
			return (-1);
		if (str[i] > '9' || str[i] < '0')
			return (-1);
		number = number * 10;
		number = number + str[i] - 48;
		i++;
	}
	return (number);
}

int	ft_valid_1(char **output, int *ijlen)
{
	int	value;

	value = 1;
	if (ft_atoi(output[0]) != ijlen[1])
		value = -1;
	return (value);
}

int	ft_valid_2(char **output, int *ijlen)
{
	int	i;

	i = 1;
	while (i < ijlen[1])
	{
		if (ft_strlen(output[i]) == ft_strlen(output[i + 1]))
			i++;
		else
			return (-1);
	}
	return (1);
}

int	ft_valid_3(char **output, int *ijlen)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= ijlen[1])
	{
		if (output[i][ijlen[2]] != '\0')
			return (-1);
		i++;
	}
	return (1);
}
