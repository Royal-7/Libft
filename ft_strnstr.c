/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:48:54 by abao              #+#    #+#             */
/*   Updated: 2018/07/11 14:11:46 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str1, const char *find, size_t len)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (find[0] == '\0')
		return (str1);
	while (x < len)
	{
		if (str1[x] == find[0])
		{
			while (str1[x + y] == find[y] && y < len)
				y++;
			if (y == len)
				return (str1[x]);
		}
	}
	return (null);
}
