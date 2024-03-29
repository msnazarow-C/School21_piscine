/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:37:06 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 17:37:08 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		ft_free(int **tab, int lines)
{
	int i;

	i = -1;
	while (++i < lines)
	{
		free(tab[i]);
		tab[i] = 0;
	}
	free(tab);
	tab = 0;
}
