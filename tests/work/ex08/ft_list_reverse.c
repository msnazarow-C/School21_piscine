/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 05:44:09 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/12 07:50:03 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *previous;
	t_list *next;

	previous = 0;
	while (*begin_list)
	{
		next = (*begin_list)->next;
		(*begin_list)->next = previous;
		previous = *begin_list;
		(*begin_list) = next;
	}
	(*begin_list) = previous;
}
