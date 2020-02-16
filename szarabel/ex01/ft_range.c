/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szarabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:11:40 by szarabel          #+#    #+#             */
/*   Updated: 2020/02/06 23:09:15 by szarabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tut;

	if ((max - min) <= 0)
		return ((void*)0);
	else
	{
		tut = (int*)malloc((max - min) * sizeof(int));
		*tut = min;
		while (*tut != max)
		{
			tut++;
			*tut = *(tut - 1) + 1;
		}
	}
	return (tut - (max - min));
}
