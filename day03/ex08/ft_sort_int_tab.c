/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 22:50:28 by kgale             #+#    #+#             */
/*   Updated: 2020/08/14 23:24:53 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a  < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				c = tab[a];
				tab[a] = tab[b];
				tab[b] = c;
			}
			b++;
		}
		a++;
	}
}
