/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:08:22 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/05 01:22:08 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}

void	ft_put_positive(int nb)
{
	if (nb != 0)
	{
		ft_put_positive(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	int temp;

	temp = nb % 10;
	nb = nb / 10;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
		ft_put_positive(nb);
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	else if (nb > 0)
	{
		ft_put_positive(nb);
	}
	if (temp < 0)
		temp = temp * -1;
	ft_putchar(temp + '0');
}
