/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 11:48:33 by kgale             #+#    #+#             */
/*   Updated: 2020/08/13 21:07:23 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	output;
	int		output1;
	int		output2;

	output1 = 0;
	while (output1 < 99)
	{
		output2 = output1 + 1;
		while (output2 < 100)
		{
			output = (output1 / 10) % 10 + '0';
			write(1, &output, 1);
			output = output1 % 10 + '0';
			write(1, &output, 1);
			write(1, " ", 1);
			output = (output2 / 10) % 10 + '0';
			write(1, &output, 1);
			output = output2 % 10 + '0';
			write(1, &output, 1);
			if (output1 != 98)
				write(1, ", ", 2);
			output2 += 1;
		}
		output1 += 1;
	}
}
