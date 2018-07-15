/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:45:27 by abao              #+#    #+#             */
/*   Updated: 2018/07/12 12:26:47 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		x;
	char	*new;

	new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new == NULL)
		return (NULL);
	x = 0;
	while (s[x] != '\0')
	{
		new[x] = (*f)(s[x]);
		x++;
	}
	new[x] = '\0';
	return (new);
}