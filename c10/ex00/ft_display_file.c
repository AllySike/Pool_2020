/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 14:28:23 by kgale             #+#    #+#             */
/*   Updated: 2020/08/24 14:28:30 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int		ft_err(int argc)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		file;
	char	str[65534];
	int		readd;
	int		i;

	readd = 1;
	i = 0;
	if (ft_err(argc))
	{
		file = open(argv[1], O_RDONLY);
		while (readd != 0 && i < 65534)
		{
			readd = read(file, &str[i], 1);
			if (readd == -1)
			{
				ft_putstr("Cannot read file.\n");
				return (0);
			}
			write(1, &str[i++], 1);
		}
		close(file);
	}
	return (0);
}
