/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:08:01 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 01:08:06 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		bsq(char *pb, int **map, t_size size, char c)
{
	int		i;
	int		j;
	t_ma	max;

	max.count = 0;
	i = 0;
	while (++i <= size.lines || (j = 0))
	{
		while (++j <= size.collums)
		{
			if (max.count == size.collums)
			{
				change_pb(pb, max, c);
				return (0);
			}
			if (map[i][j])
			{
				map[i][j] = min(map[i - 1][j],
				map[i - 1][j - 1], map[i][j - 1]) + 1;
				max = max_count(max, j, i, map[i][j]);
			}
		}
	}
	change_pb(pb, max, c);
	return (0);
}
