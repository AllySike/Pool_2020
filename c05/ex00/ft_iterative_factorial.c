/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 13:28:18 by kgale             #+#    #+#             */
/*   Updated: 2020/08/18 13:28:23 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_facorial(int nb)
{
	int	output;

	output = 1;
	if (nb < 0)
		output = 0;
	while (nb > 1)
	{
		output = output * nb;
		nb--;
	}
	return (output);
}
