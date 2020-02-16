/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 23:21:22 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 23:35:21 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_checks(int n, int f, char *argv)
{
	int bits;
	char out[STRING];

	(bits = read(f, &out, STRING));
	if (!print_error(errno,argv))	
	{
		if (bits < STRING)
		{
			if (n > bits)
				write(1, &out[0], bits);
			else
				write(1, &out[bits - n], n);
		}
		else
			ft_buffer(n, f, argv);
	}
}
