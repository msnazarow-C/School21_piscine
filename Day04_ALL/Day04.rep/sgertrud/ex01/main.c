/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 05:22:22 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/01 15:13:45 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_recursive_factorial.c"
#include "stdio.h"
#include "stdlib.h"

int		main(int argc, char **argv)
{
	if (argc != 0)
	{
		printf("%d", ft_recursive_factorial(atoi(argv[1])));
	}
	return (0);
}
