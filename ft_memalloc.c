/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:21:22 by abao              #+#    #+#             */
/*   Updated: 2018/07/11 16:50:40 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memalloc(size_t size)
{
	void	*space;

	space = malloc(size);
	if (space == null)
		return (null);
	ft_memset(space, 0, size);
	return (space);
}
