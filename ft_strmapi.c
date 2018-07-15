/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:06:21 by abao              #+#    #+#             */
/*   Updated: 2018/07/12 14:24:29 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	char	*new;

	new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new == NULL)
		return (NULL);
	x = 0;
	while (s[x] != '\0')
	{
		new[x] = (*f)(x, s[x]);
		x++;
	}
	new[x] = '\0';
	return (new);
}
