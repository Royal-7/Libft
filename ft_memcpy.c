/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:54:14 by abao              #+#    #+#             */
/*   Updated: 2018/07/10 15:02:09 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memcpy(void *str1, const void *str2, size_t n)
{
	int		x;
	char	*change;
	char	*source;

	change = (char *)str1;
	source = (char *)str2;
	x = 0;
	while (x < n)
	{
		change[x] = source[x];
		x++;
	}
}
