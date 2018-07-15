/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:04:00 by abao              #+#    #+#             */
/*   Updated: 2018/07/13 16:25:10 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_blank(char *x)
{
	int a;

	a = 0;
	while (x[a] != '\0')
	{
		while (x[a] == '\t' || x[a] == '\n' || x[a] == '\v' || x[a] == '\f')
			a++;
		while (x[a] == '+' || x[a] == '\r' || x[a] == ' ')
			a++;
	}
	return (a);
}

int			ft_atoi(char *str)
{
	int	c;
	int	negative;
	int	final;

	c = 0;
	final = 0;
	c = is_blank(str);
	if (str[c] == '-')
	{
		negative = 1;
		c++;
	}
	else
		negative = 0;
	while (str[c] != '\0' && (str[c] >= '0' && str[c] <= '9'))
	{
		final = final + (str[c] - '0');
		if (str[c + 1] != '\0' && str[c + 1] >= '0' && str[c + 1] <= '9')
			final = final * 10;
		c++;
	}
	if (negative == 1)
		return (-final);
	return (final);
}
