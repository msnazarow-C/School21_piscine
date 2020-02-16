/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 00:37:58 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/12 03:40:28 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "stdlib.h"
#include "stdio.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *pointer;

	if (*begin_list)
	{
		pointer = (*begin_list);
		while (pointer->next)
			pointer = pointer->next;
		pointer->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
