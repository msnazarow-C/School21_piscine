/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 05:22:22 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/05 00:58:54 by sgertrud         ###   ########.fr       */
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
		ft_putnbr(atoi(argv[1]));
		printf("\n");
	}
	return (0);
}
