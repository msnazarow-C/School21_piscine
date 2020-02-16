/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 18:29:49 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/01 23:26:36 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int q;

	if (nb < 2)
	{
		return (0);
	}
	q = 2;
	if (nb == 2)
	{
		return (1);
	}
	while (nb % q != 0)
	{
		q++;
		if (q > nb / q)
		{
			return (1);
		}
	}
	return (0);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 0)
	{
		return (2);
	}
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
