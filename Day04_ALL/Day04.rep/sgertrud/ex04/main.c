/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 05:22:22 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/01 18:07:07 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fibonacci.c"
#include "stdio.h"
#include "stdlib.h"

int		main(int argc, char **argv)
{
	if (argc != 0)
	{
		printf("%d\n",ft_fibonacci(atoi(argv[1])));
	}
	return (0);
}
