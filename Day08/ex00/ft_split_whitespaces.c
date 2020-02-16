/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 21:59:03 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/06 23:08:55 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		check(char c)
{
	return (c == '\t' || c == '\n' || c == ' ');
}

char	*ft_strncpy(char *dst, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		numberofwords(char *str)
{
	int i;
	int out;

	out = 0;
	i = 0;
	while (str[i])
	{
		while (check(str[i]) && str[i])
			i++;
		out++;
		while (!check(str[i]) && str[i])
			i++;
	}
	return (out);
}

void	oneword(char *str, int *i, int *lengthofword)
{
	while (check(str[*i]) && str[*i])
		(*i)++;
	*lengthofword = 0;
	while (!check(str[*i]) && str[*i])
	{
		(*lengthofword)++;
		(*i)++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	char**out;
	int lengthofword;

	j = 0;
	i = 0;
	out = (char**)malloc((numberofwords(str) + 1) * sizeof(char *));
	if (!out)
		return (0);
	while (str[i])
	{
		oneword(str, &i, &lengthofword);
		if (lengthofword)
		{
			out[j] = (char*)malloc((lengthofword + 1) * sizeof(char));
			ft_strncpy(out[j++], &str[i - lengthofword], lengthofword);
		}
	}
	out[j] = 0;
	return (out);
}
