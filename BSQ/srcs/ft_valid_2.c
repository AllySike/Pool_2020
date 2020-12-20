/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 16:58:19 by kstephai          #+#    #+#             */
/*   Updated: 2020/09/02 23:41:54 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_str_mistakes.h"
#include <unistd.h>
#include "../includes/ft_str.h"
#include "../includes/ft_valid_1.h"

int	ft_valid_4(char **output)
{
	if (output == NULL)
		return (-1);
	return (1);
}

int	ft_valid_5(char **output, int *ijlen)
{
	char	a;
	char	b;
	char	c;

	a = output[0][ijlen[0] - 3];
	b = output[0][ijlen[0] - 2];
	c = output[0][ijlen[0] - 1];
	if (a == b || b == c || a == c)
		return (-1);
	if (ijlen[0] < 4)
		return (-1);
	return (1);
}

int	ft_valid_6(char **output, int *ijlen)
{
	char	a;
	char	b;
	int		i;
	int		j;
	int		flag;

	i = 0;
	flag = 0;
	a = output[0][ijlen[0] - 3];
	b = output[0][ijlen[0] - 2];
	while (i++ < ijlen[1])
	{
		j = 0;
		while (j < ijlen[2])
		{
			if (output[i][j] != a && output[i][j] != b)
				return (-1);
			if (output[i][j] == b)
				flag = 1;
			j++;
		}
	}
	if (flag == 0)
		return (-1);
	return (1);
}

int	ft_valid_main(char **output, int *ijlen)
{
	if (ft_valid_1(output, ijlen) == -1
			|| ft_valid_2(output, ijlen) == -1
			|| ft_valid_3(output, ijlen) == -1
			|| ft_valid_4(output) == -1
			|| ft_valid_5(output, ijlen) == -1
			|| ft_valid_6(output, ijlen) == -1)
	{
		ft_putstr_mistakes("map error\n");
		return (-1);
	}
	return (1);
}
