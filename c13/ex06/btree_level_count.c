/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 21:10:02 by kgale             #+#    #+#             */
/*   Updated: 2020/08/28 21:48:59 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int count_1;
	int count_2;

	if (!root)
		return (0);
	count_1 = btree_level_count(root->left);
	count_2 = btree_level_count(root->right);
	if (count_1 < count_2)
		return (count_2 + 1);
	else
		return (count_1 + 1);
}
