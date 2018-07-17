/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:04:22 by abao              #+#    #+#             */
/*   Updated: 2018/07/16 12:19:43 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *str1, const void *str2, size_t length)
{
	char	*dest;
	char	*source;
	char	*temp;
	int		n;

	dest = (char *)str1;
	source = (char *)str2;
	temp = (char *)malloc(length);
	n = 0;
	while (n < (int)length)
	{
		temp[n] = source[n];
		n++;
	}
	n = 0;
	while (n < (int)length)
	{
		dest[n] = temp[n];
		n++;
	}
	return (dest);
}
