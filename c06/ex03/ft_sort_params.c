/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 09:26:37 by kgale             #+#    #+#             */
/*   Updated: 2020/08/19 09:26:40 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	while (i++ < argc)
	{
		j = i;
		while (j++ < argc)
		{
			if (ft_strcmp(argv[i - 1], argv[j - 1]) != -1)
			{
				str = argv[i - 1];
				argv[i - 1] = argv[j - 1];
				argv[j - 1] = str;
			}
		}
	}
	i = 1;
	while (argv[i] != '\0')
		ft_putstr(argv[i++]);
	return (0);
}
