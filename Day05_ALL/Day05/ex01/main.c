/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 05:22:22 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/04 00:00:50 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "ft_putnbr.h"

void ft_putnbr(int a);

int		main(int argc, char **argv)
{
	if (argc != 0)
	{
		printf("Eto atoi :%d\n",atoi(argv[1]));
		printf("Eto atoi :%d\n",atoi("\t\r\n\v 90899"));
		ft_putnbr(atoi(argv[1]));
		printf("\n");
//		ft_putnbr(-2147483648);
	}
	return (0);
}
