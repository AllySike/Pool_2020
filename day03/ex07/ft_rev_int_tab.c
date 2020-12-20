/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 09:28:07 by kgale             #+#    #+#             */
/*   Updated: 2020/08/14 10:07:22 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		*rev;
	int		count;

	count = 0;
	while (size > 0)
	{
		rev[count] = tab[size - 1];
		size--;
		count++;
	}
	tab = rev;
}
