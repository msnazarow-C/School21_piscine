/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgavin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:45:01 by fgavin            #+#    #+#             */
/*   Updated: 2020/02/05 23:05:35 by fgavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		*p_start;

	if (min >= max)
		return (NULL);
	arr = (int*)malloc(sizeof(int) * ((long long int)max - min));
	if (arr == NULL)
		return (NULL);
	p_start = arr;
	while (min < max)
		*arr++ = min++;
	return (p_start);
}
