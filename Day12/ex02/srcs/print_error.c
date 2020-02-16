/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:03:37 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 23:11:39 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		print_error(int err,char *argv)
{
	if (err == EISDIR)
	{	
		ft_puterror("tail: ");
		ft_puterror(argv);
		ft_puterror(": Is a directory\n");
		return (-1);
	}
	else if (err == 2)
	{
		ft_puterror("tail: ");
		ft_puterror(argv);
		ft_puterror(": No such file or directory.\n");
	}
	return (err);
}
