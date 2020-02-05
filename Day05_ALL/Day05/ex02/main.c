/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 05:22:22 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/04 01:04:18 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "Day05.h"

int		main(int argc, char **argv)
{
	int i;
	char test[14] = "123456789";

	if (argc != 0)
	{
/*		i = 0;	
		while (i < 60)
		{
		test[0] = i;
		test[1] = i;
		printf("%d\n", atoi(test));
		i++;
		}
		i = 0;
		printf("---------------\n");
		while (i < 60)
		{
		test[0] = i;
		test[1] = i;
		printf("%d\n", ft_atoi(test));
		i++;
		}*/
		printf("%d\n", ft_atoi(argv[1]));
		printf("Eto atoi : %d\n",atoi(argv[1]));
	}
	return (0);
}
