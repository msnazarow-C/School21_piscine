/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 12:29:30 by pvivian           #+#    #+#             */
/*   Updated: 2020/02/16 12:32:36 by pvivian          ###   ########.fr       */
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

void	print_all(void)
{
	int quantity_of_rushes;

	quantity_of_rushes = 0;
	if (rush[0] == 0)
		print_one_rush(0, quantity_of_rushes++);
	if (rush[1] == 0)
		print_one_rush(1, quantity_of_rushes++);
	if (rush[2] == 0)
		print_one_rush(0, quantity_of_rushes++);
	if (rush[3] == 0)
		print_one_rush(3, quantity_of_rushes++);
	if (rush[4] == 0)
		print_one_rush(4, quantity_of_rushes++);
}
