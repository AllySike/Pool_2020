/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 17:04:47 by kgale             #+#    #+#             */
/*   Updated: 2020/08/27 20:25:43 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *out_list;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		out_list = ft_create_elem(data);
		out_list->next = *begin_list;
		*begin_list = out_list;
	}
}
