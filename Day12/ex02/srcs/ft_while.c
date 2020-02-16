/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_while.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 23:28:54 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 23:40:34 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void ft_while(int argc, char **argv,int n)
{
	int i;
	int f;

	i = 2;
	while (++i < argc)
		{
			if (argc > 4)
			{
				ft_putstr("==>");
				ft_putstr(argv[i]);
				ft_putstr("<==\n");
			}
			errno = 0;
		 	f = open(argv[i],O_RDONLY);
			if (!print_error(errno,argv[i]))
			{
				ft_checks(n, f, argv[i]);
			}
			close(f);
	}
}	
