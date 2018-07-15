/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:10:58 by abao              #+#    #+#             */
/*   Updated: 2018/07/11 11:47:29 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *source, size_t len)
{
	int	count;

	count = 0;
	while ((dest[count] != '\0') && (src[count] != '\0') && count < len)
	{
		dest[count] = src[count];
		count++;
	}
	if (src[count] == '\0')
		dest[count] = '\0';
	return (dest);
}
