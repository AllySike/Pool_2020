/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 21:56:03 by kgale             #+#    #+#             */
/*   Updated: 2020/08/14 10:25:16 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char output[3];

	output[0] = '0';
	while (output[0] <= '9')
	{
		output[1] = output[0] + 1;
		while (output[1] <= '9')
		{
			output[2] = output[1] + 1;
			while (output[2] <= '9')
			{
				write(1, output, 3);
				if (output[0] != '7')
					write(1, ", ", 2);
				output[2]++;
			}
			output[1]++;
		}
		output[0]++;
	}
}
