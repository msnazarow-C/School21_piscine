/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 18:08:13 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/01 22:52:51 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int x;

	if (nb <= 0)
	{
		return (0);
	}
	while (x * x < nb)
	{
		x++;
	}
	if (x * x == nb)
	{
		return (x);
	}
	return (0);
}
