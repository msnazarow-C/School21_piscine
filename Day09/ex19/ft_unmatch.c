/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:12:10 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/07 11:41:23 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int a;

	i = -1;
	j = 0;
	while (++i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			a += (tab[i] == tab[j++]);
		}
		if (!a)
			return (tab[i]);
	}
	return (0);
}
