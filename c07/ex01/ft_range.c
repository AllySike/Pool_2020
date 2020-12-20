/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 10:32:57 by kgale             #+#    #+#             */
/*   Updated: 2020/08/20 10:32:59 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*out;
	int	i;

	if (min >= max)
		return (NULL);
	out = malloc(sizeof(int) * (max - min));
	if (out == NULL)
		return (NULL);
	i = 0;
	while (max > min + i)
	{
		out[i] = min + i;
		i++;
	}
	return (out);
}
