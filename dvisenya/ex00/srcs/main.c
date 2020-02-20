/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvisenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 05:30:21 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 23:39:35 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	t_list	*list;
	int		l;
	int		c;

	list = 0;
	list = ft_stdin();
	l = lines(list);
	c = collums(list);
	compare(list, c, l);
	return (0);
}
