/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:16:57 by abao              #+#    #+#             */
/*   Updated: 2018/07/13 11:30:22 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	int		x;
	char	*change;
	char	*source;

	change = (char *)str1;
	source = (char *)str2;
	x = 0;
	while (x < n && source[x] != c)
	{
		change[x] = source[x];
		x++;
	}
}
