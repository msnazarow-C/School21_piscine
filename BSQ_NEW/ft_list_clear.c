/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:40:07 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 21:40:08 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list)
	{
	    free((*begin_list)->data);
	    (*begin_list)->data = NULL;
		ft_list_clear(&(*begin_list)->next);
	}
	free(*begin_list);
	*begin_list = NULL;
}
