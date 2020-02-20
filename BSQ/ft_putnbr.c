/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:40:58 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 01:40:59 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int a)
{
	if (a < 0)
	{
		write(1, "-", 1);
	}
	if (a / 10 != 0)
	{
		ft_putnbr(a > 0 ? a / 10 : (a / 10) * (-1));
		a = a > 0 ? a % 10 + 48 : (a % 10) * (-1) + 48;
		write(1, &a, 1);
	}
	else
	{
		a = a > 0 ? a + 48 : -a + 48;
		write(1, &a, 1);
	}
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void		ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
