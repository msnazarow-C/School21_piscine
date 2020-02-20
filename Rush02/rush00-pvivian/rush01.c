/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 15:23:12 by kcedra            #+#    #+#             */
/*   Updated: 2020/02/02 15:27:32 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_column_1(int h, int y)
{
	if (h == 0)
		ft_putchar('/');
	if (h == y - 1 && h != 0)
		ft_putchar('\\');
	if (h != 0 && h != y - 1)
		ft_putchar('*');
}

void	ft_column_2(int h, int y)
{
	if (h == y - 1 && h != 0)
		ft_putchar('/');
	if (h == 0)
		ft_putchar('\\');
	if (h != 0 && h != y - 1)
		ft_putchar('*');
}

void	ft_center(int h, int y, int w)
{
	if ((h == 0 || h == y - 1) && w != 0)
		ft_putchar('*');
	if ((h != 0 && h != y - 1) && w != 0)
		ft_putchar(' ');
}

int		rush(int x, int y)
{
	int h;
	int w;

	h = 0;
	if (x <= 0 || y <= 0)
		return (0);
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			if (w == 0)
				ft_column_1(h, y);
			if (w == x - 1 && x - 1 != 0)
				ft_column_2(h, y);
			else
				ft_center(h, y, w);
			w++;
		}
		h++;
		ft_putchar('\n');
	}
	return (0);
}
