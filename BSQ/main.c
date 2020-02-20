/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:46:37 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 01:46:38 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	int		f;
	int		i;
	clock_t	t;

	t = clock();
	i = 0;
	if (argc == 1 || (f = 0))
		make_tab(f);
	while (++i < argc)
	{
		f = open(argv[i], O_RDONLY);
		if (f == -1)
		{
			ft_putstr(argv[i]);
			ft_putstr(": map error");
		}
		else if (make_tab(f))
		{
			ft_putstr(argv[i]);
			ft_putstr(": map error");
		}
		ft_putchar('\n');
		close(f);
	}
	return (0);
}
