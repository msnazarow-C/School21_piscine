/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 03:43:14 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/12 03:57:48 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int counter;

	if (!begin_list)
		return (0);
	counter = 1;
	while ((begin_list = begin_list->next))
		counter++;
	return (counter);
}
