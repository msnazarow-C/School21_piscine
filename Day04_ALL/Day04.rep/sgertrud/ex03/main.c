/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 05:22:22 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/01 22:26:34 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_recursive_power.c"
#include "stdio.h"
#include "stdlib.h"

int		main(int argc, char **argv)
{
	if (argc != 0)
	{
		printf("%d ^ %d = %d\n",atoi(argv[1]), atoi(argv[2]), ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	}
	return (0);
}
