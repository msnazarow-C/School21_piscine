/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 03:31:03 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/12 03:41:06 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *pointer;

	if (*begin_list)
	{
		pointer = ft_create_elem(data);
		pointer->next = *begin_list;
		*begin_list = pointer;
	}
	else
		*begin_list = ft_create_elem(data);
}
