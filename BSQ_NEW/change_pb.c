/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_pb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:22:14 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 17:22:15 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			min(int a, int b, int c)
{
	if (a <= b)
	{
		if (a <= c)
			return (a);
		else
			return (c);
	}
	else if (b < a)
	{
		if (b <= c)
			return (b);
		else
			return (c);
	}
	return (0);
}

void		change_pb(t_list *list, t_max max, t_size size, char c)
{
	int k;

	k = (max.y - max.count) * (size.collums + 1) + (max.x - max.count);
	while (k <= (max.y - 1) * (size.collums + 1) + (max.x - 1))
	{
		if ((k % (size.collums + 1) >= max.x - max.count) &&
		(k / (size.collums + 1) >= max.y - max.count) &&
		(k % (size.collums + 1) < max.x) &&
		(k / (size.collums + 1) < max.y))
			set_char_list(list, k, c);
		k++;
	}
}
