/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 21:58:15 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 12:49:17 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	char	out[STRING];
	int		f;
	int		bits;

	f = check_input(argc, argv);
	if (f > 0)
		while ((bits = read(f, &out, STRING)))
		{
			write(1, out, bits);
		}
	close(f);
}
