/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 23:25:58 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 23:26:16 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_one_rush(int number_of_rush,
						int quantity_of_rushes, int collums, int lines)
{
	if (quantity_of_rushes > 0)
		write(1, " || ", 4);
	write(1, "[rush-0", 7);
	ft_putnbr(number_of_rush);
	write(1, "] [", 3);
	ft_putnbr(collums);
	write(1, "] [", 3);
	ft_putnbr(lines);
	write(1, "]", 1);
}
