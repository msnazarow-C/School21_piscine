/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:03:37 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 07:12:34 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_input(char *argv)
{
	int f;

	f = 0;
	f = open(argv, O_DIRECTORY);
	if (f != -1)
	{
		ft_puterror("cat: ");
		ft_puterror(argv);
		ft_puterror(": Is a directory\n");
		return (-1);
	}
	close(f);
	f = open(argv, O_RDONLY);
	if (f == -1)
	{
		ft_puterror("cat: ");
		ft_puterror(argv);
		ft_puterror(": No such file or directory.\n");
	}
	return (f);
}
