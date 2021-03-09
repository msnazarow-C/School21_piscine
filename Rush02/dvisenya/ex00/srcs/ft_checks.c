/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvisenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 19:34:07 by dvisenya          #+#    #+#             */
/*   Updated: 2020/02/16 23:18:55 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_00(int l, int h, int x, int y)
{
	if (l == x)
		return ('\n');
	if ((l == 0) && (h == 0))
		return ('o');
	if (((l == x - 1) && (h == 0)) || ((l == 0) && (h == y - 1)))
		return ('o');
	if ((l == x - 1) && (h == y - 1))
		return ('o');
	if ((h == 0) || (h == y - 1))
		return ('-');
	if ((l == 0) || (l == x - 1))
		return ('|');
	return (' ');
}

char	check_01(int l, int h, int x, int y)
{
	if (l == x)
		return ('\n');
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

char	check_02(int l, int h, int x, int y)
{
	if (l == x)
		return ('\n');
	if (((l == 0) && (h == 0)) || ((l == x - 1) && (h == 0)))
		return ('A');
	if (((l == 0) && (h == y - 1)) || ((l == x - 1) && (h == y - 1)))
		return ('C');
	if ((l == 0) || (l == x - 1) || (h == 0) || (h == y - 1))
		return ('B');
	return (' ');
}

char	check_03(int l, int h, int x, int y)
{
	if (l == x)
		return ('\n');
	if (((l == 0) && (h == 0)) || ((l == 0) && (h == y - 1)))
		return ('A');
	if (((l == x - 1) && (h == 0)) || ((l == x - 1) && (h == y - 1)))
		return ('C');
	if ((l == 0) || (l == x - 1) || (h == 0) || (h == y - 1))
		return ('B');
	return (' ');
}

char	check_04(int l, int h, int x, int y)
{
	if (l == x)
		return ('\n');
	if ((l == 0) && (h == 0))
		return ('A');
	if (((l == x - 1) && (h == 0)) || ((l == 0) && (h == y - 1)))
		return ('C');
	if ((l == x - 1) && (h == y - 1))
		return ('A');
	if ((l == 0) || (l == x - 1) || (h == 0) || (h == y - 1))
		return ('B');
	return (' ');
}
