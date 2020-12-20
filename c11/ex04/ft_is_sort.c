/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 09:18:19 by kgale             #+#    #+#             */
/*   Updated: 2020/08/26 19:16:06 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	if (length == 1)
		return (1);
	if (length <= 0)
		return (0);
	if ((*f)(tab[i], tab[length - 1]) < 0)
	{
		while (i++ < length - 1)
			if ((*f)(tab[i - 1], tab[i]) > 0)
				return (0);
	}
	else
	{
		while (i++ < length - 1)
			if ((*f)(tab[i - 1], tab[i]) < 0)
				return (0);
	}
	return (1);
}
