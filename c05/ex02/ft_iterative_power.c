/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 18:19:34 by kgale             #+#    #+#             */
/*   Updated: 2020/08/18 18:19:37 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	output;

	output = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		output *= nb;
		power--;
	}
	return (output);
}
