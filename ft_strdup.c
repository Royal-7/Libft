/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:14:07 by abao              #+#    #+#             */
/*   Updated: 2018/07/09 13:14:28 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		count;

	new = (char*)malloc(sizeof(*src));
	count = 0;
	while (src[count] != '\0')
	{
		new[count] = src[count];
		count++;
	}
	return (new);
}
