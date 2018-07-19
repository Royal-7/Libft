/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:14:07 by abao              #+#    #+#             */
/*   Updated: 2018/07/17 19:33:49 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	int		count;

	new = (char*)malloc(ft_strlen(src - 1));
	count = 0;
	while (src[count] != '\0')
	{
		new[count] = src[count];
		count++;
	}
	return (new);
}
