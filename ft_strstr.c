/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:16:10 by abao              #+#    #+#             */
/*   Updated: 2018/07/09 13:18:36 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int count2;
	int len;

	count = 0;
	count2 = 0;
	len = 0;
	if (to_find[count2] == '\0')
		return (str);
	while (to_find != '\0')
		len++;
	while (str[count] != '\0')
	{
		count2 = 0;
		while (str[count + count2] == to_find[count2])
		{
			if (count2 == len - 1)
				return (&str[count]);
			else
				count2++;
		}
		count++;
	}
	return (NULL);
}
