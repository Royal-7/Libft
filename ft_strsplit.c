/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 11:06:19 by abao              #+#    #+#             */
/*   Updated: 2018/07/21 15:35:08 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function takes a given string with words seperated by a given delimiter.
** The string is seperated into an array of arrays, each word as its own node.
** This is done by creating the char **, using malloc to get the size, 
** then trimming the delim, finding the chars, 
** and putting it in a string until the next delim.
** Param: the string to be split, the delimiter.
** Return: The array of strings.
*/

#include "libft.h"

int		count(char const *s, int start, char c)
{
	int		length;

	length = 0;
	while (s[start] && s[start] != c)
	{
		length++;
		start++;
	}
	return (length);
}

int		word_count(char const *s char c)
{
	int		place;
	int		words;

	place = 0;
	words = 0;
	while (s[place] == c)
		place++;
	while (s[place])
	{
		if (s[place] == c || s[place] == '\0')
		{
			words++;
			place++;
			while (s[place] == c)
				place++;
		}
		else
			place++;
	}
	return (words);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**final;
	int		words;
	int		len;

	words = 0;
	len = 0;
	final = (char **)malloc(word_count(s, c));
	while (s[len] == c)
		len++;
	while (s[len])
	{
		final[words] = ft_strsub(s, len, count(s, len, c));
	}
}
