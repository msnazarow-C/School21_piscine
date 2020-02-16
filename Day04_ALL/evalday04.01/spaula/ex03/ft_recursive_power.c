/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 23:26:29 by spaula            #+#    #+#             */
/*   Updated: 2020/02/01 23:26:38 by spaula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int res;

	if (power == 0)
	{
		return (1);
	}
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
