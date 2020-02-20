/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 00:48:48 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/14 01:45:55 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.c"
#include "ft_putnbr.c"

unsigned char swap_bits(unsigned char octet)
{
	return ((octet << 4) + (octet >> 4));
}

int		main(int argc, char **argv)
{
	unsigned char c;
	
	c = 123; 
	if (argc && argv[0])
	c = swap_bits(c);
	ft_putnbr(c);
}
