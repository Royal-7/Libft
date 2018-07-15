/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:04:20 by abao              #+#    #+#             */
/*   Updated: 2018/07/11 18:04:54 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnew(size_t size)
{
	char	*string;

	string = (char *)malloc(size);
	if (string == NULL)
		return (NULL);
	ft_memset(string, (int)'\0', size + 1);
	return (string);
}
