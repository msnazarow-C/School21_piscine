/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 06:05:20 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/14 06:48:30 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *pointer;
    t_list *previous;

    previous = 0;
    pointer = *begin_list;
    if (*begin_list)
    {
      if(!cmp(data_ref,(*begin_list)->data))
      {
        if ((*begin_list)->next)
          *begin_list = (*begin_list)->next;
        free(pointer); 
      }
      previous = *begin_list;
      while ((pointer = pointer->next))
      {
        if (!cmp(data_ref,pointer->data))
        {
           if (pointer->next)
              previous->next = pointer->next;
           free(pointer);       
              pointer = previous->next;
        }
          previous = pointer;
      }
    }
}
