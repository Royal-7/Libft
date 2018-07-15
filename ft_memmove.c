/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:04:22 by abao              #+#    #+#             */
/*   Updated: 2018/07/10 15:25:32 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *str1, const void *str2, size_t length)
{
	char	*dest;
	char	*source;
	char	*temp;
	int		n;

	dest = (char *)str1;
	source = (char *)str2;
	n = 0;
	while (n < length)
	{
		temp[n] = source[n];
		n++;
	}
	n = 0;
	while (n < length)
	{
		dest[n] = temp[n];
		n++;
	}
	return (dest);
}
