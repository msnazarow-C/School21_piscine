/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:49:55 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 01:49:56 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		make_tab(int f)
{
	int		**tab;
	char	*buf;
	int		i;
	int		j;
	char	symbols[3];
	char	*pb;
	t_size	size;

	if (!(buf = (char *)malloc(sizeof(char) * STRING)))
		return (-1);
	i = 0;
	if (f == 0)
		while ((j = read(f, buf, STRING)) > 0)
			buf += j;
	else if (read(f, buf, STRING) <= 0)
		return (-1);
	else
	{
		pb = buf;
		while (pb[i] != '\n' && pb[i] != '\r' && pb[i])
			++i;
		ft_strncpy(symbols, &pb[i - 3], 3);
		pb = buf;
		if (get_int_symbols(&pb, i - 2, &(size.lines), symbols))
			return (-1);
		size.collums = 0;
		pb++;
		while (pb[size.collums] != '\n' && pb[size.collums] != '\r')
			size.collums++;
		if (!size.lines || !size.collums)
			return (-1);
		i = -1;
		ft_putstr("collums :");
		ft_putnbr(size.collums);
		ft_putchar('\n');
		ft_putstr("lines :");
		ft_putnbr(size.lines);
		ft_putchar('\n');
		tab = (int**)malloc((size.lines + 1) * sizeof(int*));
		while (++i <= size.lines)
		{
			tab[i] = (int*)malloc((size.collums + 1) * sizeof(int));
			if (i == 0)
			{
				j = -1;
				while (++j <= size.collums)
					tab[i][j] = 0;
			}
			else
			{
				tab[i][0] = 0;
				j = -1;
				while (++j < size.collums)
				{
					if (pb[j] == symbols[0])
						tab[i][j + 1] = 1;
					else if (pb[j] == symbols[1])
						tab[i][j + 1] = 0;
					else
						return (-1);
				}
				if (pb[j] != '\n')
					return (-1);
				pb += (size.collums + 1);
			}
		}
		if (*pb != '\0')
			return (-1);
		pb = buf;
	}
	bsq(pb, tab, size, symbols[2]);
	ft_free(tab, size.lines);
	return (0);
}
