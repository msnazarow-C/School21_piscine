/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:12:43 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 23:38:38 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	char	out[STRING];
	int		bits;
	int		i;
	int		f2;
	int		n;
	int		len;
	f2 = open(".buffer",O_WRONLY);
	i = 2;
	if ((argc == 1) || (argc == 2 && !ft_strcmp(argv[1], "--")))
	{
		len = 0;
		while ((bits = read(0, &out[len], STRING)) > 0)
			len += bits;
			write(1, out, len);
	}
	else if (ft_strcmp(argv[1], "-c"))
			ft_puterror("tail: illegal option");
	else if (!(n = ft_abs(ft_atoi(argv[2]))))
			ft_puterror("tail: illegal offset");
	else 
	{
		ft_while(argc, argv, n);
	}
}
