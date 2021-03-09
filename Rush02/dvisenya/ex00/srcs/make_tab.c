/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 23:13:18 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 23:23:11 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		collums(t_list *list)
{
	int i;
	int c;
	int max;

	c = 0;
	max = 0;
	while (list)
	{
		i = 0;
		while (list->data[i])
		{
			if (list->data[i] == '\n')
			{
				if (c > max)
					max = c;
				c = 0;
				i++;
				break ;
			}
			i++;
			c++;
		}
		list = list->next;
	}
	return (max);
}

int		lines(t_list *list)
{
	int i;
	int l;

	l = 0;
	while (list)
	{
		i = -1;
		while (list->data[++i])
			if (list->data[i] == '\n')
				l++;
		list = list->next;
	}
	return (l);
}

char	**make_tab(t_list *list, int collums, int lines)
{
	char**out;
	int i;
	int j;
	int k;

	i = -1;
	out = (char**)malloc(lines * sizeof(char*));
	while (++i < lines)
		out[i] = (char*)malloc(collums * sizeof(char));
	i = -1;
	k = 0;
	if (!list)
		return (0);
	while (++i < lines)
	{
		j = -1;
		while (++j <= collums)
		{
			if (list->next && list->data[k] == '\0')
				list = list->next;
			if (list->data[k])
				out[i][j] = list->data[k++];
		}
	}
	return (out);
}
