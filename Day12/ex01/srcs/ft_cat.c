/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 05:44:56 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 12:50:25 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	char	out[STRING];
	int		f;
	int		bits;
	int		i;

	i = 0;
	if ((argc == 1) || (argc == 2 && !ft_strcmp(argv[1], "--")))
		while ((bits = read(0, out, STRING)))
			write(1, out, bits);
	else
		while (++i < argc)
		{
			if (!ft_strcmp(argv[i], "-"))
				while ((bits = read(0, out, STRING)))
					write(1, out, bits);
			else
			{
				f = check_input(argv[i]);
				if (f > 0)
					while ((bits = read(f, &out, STRING)))
						write(1, out, bits);
			}
			close(f);
		}
}
