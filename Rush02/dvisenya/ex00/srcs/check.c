/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 23:26:28 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 23:38:59 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		*cmp(char **tab, int col, int line, int l)
{
	static int	flag[5];
	int			h;

	while (++l < 5)
		flag[l] = 1;
	h = -1;
	while (++h < line)
	{
		l = -1;
		while (++l <= col)
		{
			if (flag[0] && (tab[h][l] != check_00(l, h, col, line)))
				flag[0] = 0;
			if (flag[1] && (tab[h][l] != check_01(l, h, col, line)))
				flag[1] = 0;
			if (flag[2] && (tab[h][l] != check_02(l, h, col, line)))
				flag[2] = 0;
			if (flag[3] && (tab[h][l] != check_03(l, h, col, line)))
				flag[3] = 0;
			if (flag[4] && (tab[h][l] != check_04(l, h, col, line)))
				flag[4] = 0;
		}
	}
	return (flag);
}

void	compare(t_list *list, int col, int line)
{
	int		i;
	int		quanity_of_rushes;
	char	**tab;
	int		*flag;

	tab = make_tab(list, col, line);
	flag = cmp(tab, col, line, -1);
	i = -1;
	quanity_of_rushes = 0;
	while (++i < 5)
		if (flag[i])
		{
			print_one_rush(i, quanity_of_rushes, col, line);
			quanity_of_rushes++;
		}
	if (quanity_of_rushes == 0)
		ft_putstr("aucune\n");
	else
		ft_putstr("\n");
}
