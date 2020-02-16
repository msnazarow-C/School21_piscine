/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 02:32:32 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/01 22:00:46 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int temp;

	if (nb >= 0 && nb <= 100)
	{
		if (nb == 0)
		{
			return (1);
		}
		temp = ft_recursive_factorial(nb - 1);
		return (nb * temp / nb == temp ? nb * temp : 0);
	}
	return (0);
}
