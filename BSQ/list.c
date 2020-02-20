/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:46:04 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 01:46:05 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_list	*ft_create_elem(char *data)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	new->data = ft_strdup(data);
	new->next = NULL;
	return (new);
}

void	ft_list_push_back(t_list **begin_list, char *data)
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

void	ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}
