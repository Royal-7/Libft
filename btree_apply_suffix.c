/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 14:16:24 by abao              #+#    #+#             */
/*   Updated: 2018/07/18 14:16:38 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_suffix(t_btree *root, void (*applyf) (void *))
{
	t_btree	*tree;

	tree = root;
	if (root->item == 0)
		return ;
	btree_apply_prefix(tree->left);
	btree_apply_prefix(tree->right);
	(*applyf)(tree->item);
}
