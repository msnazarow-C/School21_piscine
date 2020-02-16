/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfarwynd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 17:17:34 by bfarwynd          #+#    #+#             */
/*   Updated: 2020/02/06 19:21:02 by bfarwynd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int l;

	if (min >= max)
		*range = 0;
	if (min >= max)
		return (0);
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (0);
	l = max - min;
	i = 0;
	while (max > min)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (l);
}
