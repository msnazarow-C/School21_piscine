/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 13:16:45 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/14 03:42:34 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
		ft_putchar(nb > 0 ? nb + '0': -nb + '0');
}


int main (void)
{
	ft_putnbr(0);
}
