/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 13:16:45 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/04 00:16:07 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define flag 1

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	}
	if (nb != 0)
		ft_putnbr(nb < 0 ? (nb / 10) * (-1) : nb / 10);
	else
		return;
	ft_putchar(nb < 0 ? (nb % 10) * (-1) + '0' : nb % 10 + '0');
}