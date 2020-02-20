/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:56:56 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 01:56:58 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_max	max_count(t_max max, int i, int j, int count)
{
	if (count > max.count)
	{
		max.count = count;
		max.x = i;
		max.y = j;
	}
	return (max);
}
