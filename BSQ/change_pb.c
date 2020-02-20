/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_pb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:24:01 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 01:24:02 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		change_pb(char *pb, t_max max, char c)
{
	int j;
	int i;
	int k;

	k = -1;
	j = -1;
	i = 0;
	while (pb[++k])
	{
		++j;
		if (pb[k] == '\n')
		{
			j = 0;
			i++;
			k++;
		}
		if ((j >= max.x - max.count) && (j < max.x) &&
		(i >= max.y - max.count) && (i < max.y))
			pb[k] = c;
	}
	write(1, pb, k);
}
