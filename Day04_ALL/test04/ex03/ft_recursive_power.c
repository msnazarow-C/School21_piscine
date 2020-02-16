/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:42:20 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/01 22:34:56 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int temp;

	if (power >= 0)
	{
		if (power == 1)
		{
			return (nb);
		}
		if (power == 0)
		{
			return (1);
		}
		if (nb == 0 || power * nb >= 10000)
		{
			return (0);
		}
		else
		{
			temp = ft_recursive_power(nb, power - 1);
			return (nb * temp / nb == temp ? nb * temp : 0);
		}
	}
	return (0);
}
