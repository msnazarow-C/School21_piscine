/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgavin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 21:27:45 by fgavin            #+#    #+#             */
/*   Updated: 2020/02/06 14:28:55 by fgavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	i = -1;
	if (min >= max || ((long long int)max - min) > 2147483647)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int*)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (0);
	while (++i < size)
		*(*range + i) = min++;
	return (size);
}
