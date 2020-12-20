/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 20:56:09 by kgale             #+#    #+#             */
/*   Updated: 2020/08/27 22:37:27 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*list;
	t_list	*create;

	i = 0;
	while (i < size)
	{
		if (i == 0)
			list = ft_create_elem(strs[i]);
		else
		{
			create = ft_create_elem(strs[i]);
			create->next = list;
			list = create;
		}
		i++;
	}
	return (list);
}
