/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 23:11:26 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 23:11:27 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb < 0 ? (nb / 10) * (-1) : nb / 10);
		ft_putchar(nb < 0 ? (nb % 10) * (-1) + '0' : nb % 10 + '0');
	}
	else
		ft_putchar(nb > 0 ? nb + '0' : -nb + '0');
}
