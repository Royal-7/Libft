/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:18:34 by abao              #+#    #+#             */
/*   Updated: 2018/07/10 13:08:56 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int x)
{
	if (x > 31 && x < 127)
		return (1);
	else
		return (0);
}
