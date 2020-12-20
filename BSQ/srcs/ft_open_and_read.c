/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_and_read.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 15:07:28 by kstephai          #+#    #+#             */
/*   Updated: 2020/09/02 23:41:49 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../includes/ft_open_and_read.h"
#include "../includes/ft_str_mistakes.h"
#include "../includes/ft_str.h"
#include "../includes/ft_valid_1.h"
#include "../includes/ft_valid_2.h"

int		ft_open(char *file)
{
	int	check_open;

	check_open = open(file, O_RDONLY);
	if (check_open < 0)
	{
		ft_putstr_mistakes("map error\n");
		return (-1);
	}
	return (check_open);
}

int		ft_read(int check_open, char *file)
{
	int		check_read;
	char	symbol;

	check_read = read(check_open, &symbol, 1);
	if (check_read < 0)
	{
		ft_putstr_mistakes("map error\n");
		return (-1);
	}
	close(check_open);
	open(file, O_RDONLY);
	return (check_read);
}

int		*ft_count_ijlen(int *out, char symbol, int end)
{
	if (out[1] == 0 && symbol != '\n')
		out[0] += 1;
	else if (symbol == '\n')
	{
		out[1]++;
	}
	else if (end == 0)
		out[2]++;
	return (out);
}

int		*ft_max_width(char *file)
{
	int		check_read;
	char	symbol;
	int		*out;
	int		end;

	end = 0;
	out = (int*)malloc(sizeof(int) * 3);
	out[0] = 0;
	out[1] = 0;
	out[2] = 0;
	check_read = ft_open(file);
	if (check_read > 0 && ft_read(check_read, file))
		while (read(check_read, &symbol, 1) > 0)
		{
			if (symbol == '\n' && out[2] != 0)
				end = 1;
			if (end == 0)
				out = ft_count_ijlen(out, symbol, 0);
			else
				out = ft_count_ijlen(out, symbol, 1);
		}
	if (out[1] > 0)
		out[1]--;
	return (out);
}

char	**ft_open_and_read(char *file, int *ijlen, int i)
{
	char	**output;
	int		check_read;
	char	symbol;
	int		j;

	j = 0;
	output = (char**)malloc(sizeof(char*) * (ijlen[1] + 1));
	while (i < ijlen[1] + 1)
		output[i++] = (char*)malloc(sizeof(char) * (ijlen[2] + 1));
	i = 0;
	check_read = ft_open(file);
	if (check_read > 0 && ft_read(check_read, file))
		while (read(check_read, &symbol, 1) > 0)
		{
			if (symbol != '\n')
				output[i][j++] = symbol;
			else
			{
				output[i++][j] = '\0';
				j = 0;
			}
		}
	close(check_read);
	return (output);
}
