/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 15:04:13 by kstephai          #+#    #+#             */
/*   Updated: 2020/09/02 23:33:48 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../includes/ft_square.h"
#include "../includes/ft_str.h"

int		ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

int		**ft_put_nbr_square(char **input, int range, char empty, char obstacle)
{
	int	i;
	int	j;
	int	**output;

	i = 0;
	output = (int**)malloc(sizeof(int*) * range);
	while (i < range)
	{
		j = 0;
		output[i] = (int*)malloc(sizeof(int) * ft_strlen(input[i + 1]));
		while (input[i + 1][j])
		{
			if (input[i + 1][j] == empty)
				output[i][j] = 1;
			else if (input[i + 1][j] == obstacle)
				output[i][j] = 0;
			j++;
		}
		i++;
	}
	return (output);
}

int		**ft_find_square(int **input, int range, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < range)
	{
		j = 0;
		while (j < len)
		{
			if (input[i][j] == 1 && (i != 0 && j != 0))
				input[i][j] = ft_min(input[i - 1][j],
				input[i - 1][j - 1], input[i][j - 1]) + 1;
			j++;
		}
		i++;
	}
	return (input);
}

int		*ft_get_index(int **input, int range, int len)
{
	int	i;
	int	j;
	int	*index;

	index = (int *)malloc(sizeof(int) * 3);
	i = 0;
	index[2] = 0;
	while (i < range)
	{
		j = 0;
		while (j < len)
		{
			if (input[i][j] > index[2])
			{
				index[0] = i;
				index[1] = j;
				index[2] = input[i][j];
			}
			j++;
		}
		i++;
	}
	return (index);
}

void	ft_change(int *input, char **output, char full, int *range)
{
	int		i;
	int		j;

	i = 1;
	while (i < range[1] + 1)
	{
		j = 0;
		while (j < range[2] + 1)
		{
			if ((i <= input[0] + 1 && i > input[0] + 1 - input[2])
			&& j <= input[1] && j >= input[1] + 1 - input[2])
				ft_putchar(full);
			else
				ft_putchar(output[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
}
