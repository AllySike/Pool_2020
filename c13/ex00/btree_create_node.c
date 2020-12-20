/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 00:00:30 by kgale             #+#    #+#             */
/*   Updated: 2020/08/28 01:08:13 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*i;

	i = (t_btree*)malloc(sizeof(t_btree));
	if (i)
	{
		i->item = item;
		i->left = 0;
		i->right = 0;
	}
	return (i);
}
