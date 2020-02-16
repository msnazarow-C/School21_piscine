/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 22:15:37 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/11 22:24:52 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *out;

	out = (int*)malloc(length * sizeof(int));
	i = -1;
	while (++i < length)
	{
		out[i] = f(tab[i]);
	}
	return (out);
}
