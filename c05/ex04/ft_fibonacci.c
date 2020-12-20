/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 18:59:02 by kgale             #+#    #+#             */
/*   Updated: 2020/08/18 18:59:05 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index > 0)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (0);
}
