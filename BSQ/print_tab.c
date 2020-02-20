/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:59:07 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 01:59:08 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		print_bsq(char *pb, t_size size, t_max max)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	c = pb[-2];
	while (++i < size.lines)
	{
		j = -1;
		while (++j < size.collums)
		{
			if ((j >= max.x - max.count) && (j <= max.x)
			&& (i >= max.y - max.count) && (i <= max.y))
				ft_putchar(c);
			else
				ft_putchar(pb[j]);
		}
		pb += size.collums + 1;
		ft_putchar('\n');
	}
}

void		print_tab(int **tab, int lines, int collums)
{
	int i;
	int j;

	i = -1;
	while (++i <= lines)
	{
		j = -1;
		while (++j <= collums)
			ft_putnbr(tab[i][j]);
		ft_putchar('\n');
	}
}
