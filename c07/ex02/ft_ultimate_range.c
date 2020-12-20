/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 08:39:11 by kgale             #+#    #+#             */
/*   Updated: 2020/08/21 08:39:13 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min + 1));
	if (*range == NULL)
		return (0);
	i = 0;
	while (max > min + i)
	{
		(*range)[i] = min + i;
		i++;
	}
	(*range)[i] = '\0';
	return (i);
}
