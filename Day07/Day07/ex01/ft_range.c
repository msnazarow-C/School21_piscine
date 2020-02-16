/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 11:25:39 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/06 13:05:49 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (min >= max || max - min + min != max)
		return (0);
	arr = (int *)malloc((max - min) * sizeof(char));
	while (i < max - min)
	{
		arr[i] = i + min;
		i++;
	}
	return (arr);
}
