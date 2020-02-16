/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 04:19:37 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/12 05:23:43 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*pointer;
	t_list	*first;
	int		i;

	first = ft_create_elem(av[ac - 1]);
	pointer = first;
	i = ac - 1;
	while (--i >= 0)
	{
		pointer->next = ft_create_elem(av[i]);
		pointer = pointer->next;
	}
	return (first);
}
