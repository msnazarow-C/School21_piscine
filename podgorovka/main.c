/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 00:46:29 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/14 00:47:54 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.c"

int		main(int argc, char **argv)
{
	if (argc && argv[0])
		ft_putstr(argv[1]);
}