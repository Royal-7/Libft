/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 14:16:52 by abao              #+#    #+#             */
/*   Updated: 2018/07/18 14:17:03 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_prefix(t_btree *root, void (*applyf) (void *))
{
	t_btree	*tree;

	tree = root;
	if (root->item == 0)
		return ;
	(*applyf)(tree->item);
	btree_apply_prefix(tree->left, applyf);
	btree_apply_prefix(tree->right, applyf);
}
