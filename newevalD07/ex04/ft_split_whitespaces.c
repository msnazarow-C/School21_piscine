/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfarwynd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 20:05:11 by bfarwynd          #+#    #+#             */
/*   Updated: 2020/02/06 16:23:02 by bfarwynd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_sep_w(char w)
{
	if (w == ' ' || w == '\t' || w == '\n')
		return (1);
	else
		return (0);
}

int			is_count_w(char *str)
{
	int count;
	int is_is_w;
	int i;

	count = 0;
	is_is_w = 0;
	i = 0;
	while (str[i])
	{
		if (!is_sep_w(str[i]) && !is_is_w)
			count++;
		if (!is_sep_w(str[i]))
			is_is_w = 1;
		else
			is_is_w = 0;
		i++;
	}
	return (count);
}

char		*is_insert_w(char *b, int start, int len_w)
{
	char	*a;
	int		i;

	a = (char *)malloc(sizeof(char ) * (len_w + 1));
	i = 0;
	while (!is_sep_w(b[start]) && b[start] != '\0')
		a[i++] = b[start++];
	a[start] = '\0';
	free(a);
	return (a);
}

char		**ft_split_whitespaces(char *str)
{
	int		i[4];
	char	**ans;

	i[2] = is_count_w(str) + 1;
	ans = (char **)malloc(sizeof(char *) * (i[2] + 1));
	ans[--i[2]] = NULL;
	i[1] = 0;
	i[0] = 0;
	i[3] = 0;
	while (str[i[0]] != '\0')
	{
		if (!is_sep_w(str[i[0]]))
		{
			while (!is_sep_w(str[i[0] + i[1]]))
				i[1]++;
			if (i[3] < i[2])
				ans[i[3]] = (char *)malloc(sizeof(char) * (i[1] + 1));
			if (i[3] < i[2])
				ans[i[3]++] = is_insert_w(str, i[0], i[1]);
			i[0] += i[1];
			i[1] = 0;
		}
		i[0]++;
	}
	return (ans);
}
