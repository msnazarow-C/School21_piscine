/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 06:40:32 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 09:23:22 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		collums(t_list *list)
{
	int i;
	int c;

	c = 0;
	while(list)
	{
		i = 0;
		while(list->data[i])
		{
			i++;
			c++;
			if (list->data[i] == '\n')
				return (c);
		}
		list = list->next;
	}
	return (c);
}

int		lines(t_list *list)
{
	int i;
	int l;

	l = 1;
	while(list)
	{
		i = -1;
		while(list->data[++i])
			if(list->data[i] == '\n' && list->next)
				l++;
			list = list->next;
	}
	return (l);
}
