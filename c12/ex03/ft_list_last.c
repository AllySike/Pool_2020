/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 15:12:00 by kgale             #+#    #+#             */
/*   Updated: 2020/08/27 20:27:09 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*i;
	t_list	*last_elem;

	i = begin_list;
	last_elem = begin_list;
	while (i)
	{
		last_elem->data = i->data;
		last_elem->next = i->next;
		i = (*i).next;
	}
	return (last_elem);
}
