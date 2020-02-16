/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfarwynd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:17:16 by bfarwynd          #+#    #+#             */
/*   Updated: 2020/02/06 19:19:37 by bfarwynd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ret;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	ret = malloc(sizeof(int) * (max - min));
	while (max > (min + i))
	{
		ret[i] = min + i;
		i++;
	}
	free(ret);
	return (ret);
}
