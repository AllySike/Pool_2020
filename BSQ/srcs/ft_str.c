/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 12:32:43 by kstephai          #+#    #+#             */
/*   Updated: 2020/09/02 23:33:26 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft_str.h"
#include "../includes/ft_str_mistakes.h"
#include "../includes/ft_open_and_read.h"
#include "../includes/ft_square.h"
#include "../includes/ft_valid_1.h"
#include "../includes/ft_valid_2.h"
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strlen(char *str)
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d_len;

	d_len = 0;
	while (dest[d_len])
		d_len++;
	i = 0;
	while (src[i])
	{
		dest[d_len] = src[i];
		i++;
		d_len++;
	}
	dest[d_len] = '\0';
	return (dest);
}

void	ft_print_bsq(char *file_name, int i, int open)
{
	int		*len;
	char	**str;
	int		**output;

	open = ft_open(file_name);
	if (open >= 0 && ft_read(open, file_name) >= 0)
	{
		len = ft_max_width(file_name);
		str = (char **)malloc(sizeof(char*) * len[1]);
		str = ft_open_and_read(file_name, len, 0);
		if (ft_valid_main(str, len) != -1)
		{
			output = (int**)malloc(sizeof(int*) * len[1]);
			while (i < len[1])
				output[i++] = (int*)malloc(sizeof(int) * len[2]);
			output = ft_put_nbr_square(str, len[1],
			str[0][len[0] - 3], str[0][len[0] - 2]);
			output = ft_find_square(output, len[1], len[2]);
			ft_change(ft_get_index(output, len[1], len[2]), str,
			str[0][len[0] - 1], len);
			free(str);
			free(output);
		}
	}
	close(open);
}
