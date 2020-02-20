/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 16:51:19 by pvivian           #+#    #+#             */
/*   Updated: 2020/02/02 16:52:30 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_column(int h, int y)
{
	if (h == 0)
		ft_putchar('A');
	if (h == y - 1 && h != 0)
		ft_putchar('C');
	if (h != 0 && h != y - 1)
		ft_putchar('B');
}

void	ft_center(int h, int y, int w)
{
	if ((h == 0 || h == y - 1) && w != 0)
		ft_putchar('B');
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
				ft_column(h, y);
			if (w == x - 1 && x - 1 != 0)
				ft_column(h, y);
			else
				ft_center(h, y, w);
			w++;
		}
		h++;
		ft_putchar('\n');
	}
	return (0);
}
