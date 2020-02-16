/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 03:09:15 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/01 22:22:03 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		iter(int nb, int power)
{
	int i;
	int out;

	i = 0;
	out = 1;
	while (i++ < power)
	{
		if ((out * nb / nb) != out)
		{
			return (0);
		}
		out = out * nb;
	}
	return (out);
}

int		ft_iterative_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 || nb == 1)
	{
		return (1);
	}
	if (power == 1 || nb == 0)
	{
		return (nb);
	}
	return (iter(nb, power));
}
