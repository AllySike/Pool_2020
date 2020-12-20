/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 21:09:12 by kgale             #+#    #+#             */
/*   Updated: 2020/08/18 21:09:16 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	nbr;

	nbr = 1;
	if (nb < 2)
		return (2);
	while ((nbr <= (nb + 1) / 2))
	{
		if (nb % nbr == 0 && nb != nbr && nbr != 1)
			return (ft_find_next_prime(nb + 1));
		nbr++;
	}
	return (nb);
}
