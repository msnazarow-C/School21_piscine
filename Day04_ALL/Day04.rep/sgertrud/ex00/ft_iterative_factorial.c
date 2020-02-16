/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 02:11:16 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/01 15:03:43 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int temp;
	int i;

	temp = 1;
	i = 2;
	if (nb >= 0)
	{
		if (nb == 0)
		{
			return (1);
		}
		while (i <= nb)
		{
			if (temp * (i) / (i) != temp)
			{
				return (0);
			}
			temp = temp * i;
			i++;
		}
		return (temp);
	}
	return (0);
}
