/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:53:08 by abao              #+#    #+#             */
/*   Updated: 2018/07/09 19:28:23 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, size_t n)
{
	int		x;
	char	*string;

	string = (char *)str;
	x = 0;
	while (x < n)
	{
		if (string[x] == c)
			return (string[x]);
		x++;
	}
	return (null);
}
