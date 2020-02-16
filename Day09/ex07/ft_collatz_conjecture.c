/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 23:35:25 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/06 23:41:08 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (base % 2)
		base = base / 2;
	else
		base = base * 3 + 1;
	return (ft_collatz_conjecture(base));
}
