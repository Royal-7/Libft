/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:31:38 by abao              #+#    #+#             */
/*   Updated: 2018/07/10 14:41:20 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*one;
	char	*two;
	int		x;

	one = (char *)str1;
	two = (char *)str2;
	x = 0;
	while (one[x] == two[x])
	{
		if (one[x] == '\0' && one[x] == '\0')
			return (0);
		x++;
	}
	if (one[x] > two[x])
		return (two[x] - one[x]);
	else
		return (one[x] - two[x]);
}
