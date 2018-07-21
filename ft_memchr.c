/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:53:08 by abao              #+#    #+#             */
/*   Updated: 2018/07/20 19:50:14 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	d;

	d = (unsigned char)c;
	i = 0;
	str = (unsigned char*)s;
	while (str[i] != d && i < (n - 1))
		i++;
	if (str[i] == d && n != 0)
		return (str += i);
	return (NULL);
}
