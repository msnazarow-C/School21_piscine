/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvisenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:36:08 by dvisenya          #+#    #+#             */
/*   Updated: 2020/02/15 12:28:46 by dvisenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	check(int l, int h, int x, int y)
{
	if ((l == 0) && (h == 0))
		return ('/');
	if (((l == x - 1) && (h == 0)) || ((l == 0) && (h == y - 1)))
		return ('\\');
	if ((l == x - 1) && (h == y - 1))
		return ('/');
	if ((l == 0) || (l == x - 1) || (h == 0) || (h == y - 1))
		return ('*');
	return (' ');
}

void	rush(int x, int y)
{
	int length;
	int height;

	if (x <= 0 || y <= 0)
		return ;
	length = 0;
	height = 0;
	while (height < y)
	{
		while (length < x)
		{
			ft_putchar(check(length, height, x, y));
			length++;
		}
		ft_putchar('\n');
		length = 0;
		height++;
	}
}
