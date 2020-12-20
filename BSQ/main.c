/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 09:59:44 by kgale             #+#    #+#             */
/*   Updated: 2020/09/02 23:39:35 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/ft_str_mistakes.h"
#include "includes/ft_str.h"
#include "includes/ft_square.h"
#include "includes/ft_open_and_read.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	char	symbol;
	char	file[65000];
	int		j;

	i = 1;
	if (argc == 1)
		while (read(0, &symbol, 1) != 0)
		{
			if (symbol != '\n')
				file[i++] = symbol;
			else
			{
				ft_print_bsq(file, 0, 0);
				j = 0;
				while (j < 65000)
					file[j++] = '\0';
				i = 0;
			}
		}
	else
		while (argv[i])
			ft_print_bsq(argv[i++], 0, 0);
	return (0);
}
