/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 00:47:18 by kgale             #+#    #+#             */
/*   Updated: 2020/08/28 20:15:05 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
int (*cmpf)(void *, void *))
{
	if (!*root)
		*root = ft_create_node(item);
	else
	{
		if (cmpf((*root)->item, item) > 0)
			btree_insert_data(&((*root)->left), item, (*cmpf));
		else
			btree_insert_data(&((*root)->right), item, (*cmpf));
	}
}
