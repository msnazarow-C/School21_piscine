/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 05:30:21 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 09:02:31 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	t_list *list;

	list = 0;
	list = ft_stdin();
	ft_print_list(list);
	ft_putnbr(collums(list));
	ft_putchar('\n');
	ft_putnbr(lines(list));
	ft_putchar('\n');
}
