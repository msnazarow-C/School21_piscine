/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:03:37 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 07:00:56 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_input(int argc, char **argv)
{
	int f;

	f = 0;
	if (argc == 1)
		ft_puterror("File name missing.\n");
	else if (argc != 2)
		ft_puterror("Too many argumets.\n");
	else
	{
		f = open(argv[1], O_DIRECTORY);
		if (f != -1)
		{
			ft_puterror("Is a directory\n");
			return (-1);
		}
		close(f);
		f = open(argv[1], O_RDONLY);
		if (f == -1)
			ft_puterror("No such file or directory.\n");
	}
	return (f);
}
