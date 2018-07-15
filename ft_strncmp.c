/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:28:42 by abao              #+#    #+#             */
/*   Updated: 2018/07/11 10:29:33 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int count;

	count = 0;
	while ((count < n) && ((s1[count] != '\0') || (s2[count] != '\0')))
	{
		if (s1[count] > s2[count])
			return (s1[count] - s2[count]);
		else if (s1[count] < s2[count])
			return (s1[count] - s2[count]);
		else
			count++;
	}
	return (0);
}
