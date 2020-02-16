/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbacon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 09:16:43 by tbacon            #+#    #+#             */
/*   Updated: 2020/02/06 19:54:06 by tbacon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;
	int len;

	if (min >= max)
	{
		return (NULL);
	}
	i = 0;
	len = max - min;
	range = (int*)malloc(sizeof(int) * len);
	while (i < len)
	{
		range[i] = min + 1;
		i++;
	}
	return (range);
}
