/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:26:02 by abao              #+#    #+#             */
/*   Updated: 2018/07/10 16:36:42 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str1, int n, size_t len)
{
	char	*string;
	int		x;

	string = (char *)str1;
	x = 0;
	while (x < len)
	{
		string[x] = n;
		x++;
	}
	return (string);
}
