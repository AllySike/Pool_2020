/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 16:26:30 by kgale             #+#    #+#             */
/*   Updated: 2020/08/27 20:53:14 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*i;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		i = *begin_list;
		while (i)
		{
			i = (*i).next;
		}
		i = ft_create_elem(data);
		(*begin_list) = i;
	}
}
