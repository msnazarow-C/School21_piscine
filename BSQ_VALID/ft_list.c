/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:40:00 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 17:40:02 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_list		*ft_create_elem(char *data, int len)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	new->data = ft_strndup(data, len);
	new->len = len;
	new->next = NULL;
	return (new);
}

void		ft_list_push_back(t_list **begin_list, char *data, int len)
{
	t_list *pointer;

	if (*begin_list)
	{
		pointer = (*begin_list);
		while (pointer->next)
		pointer = pointer->next;
		pointer->next = ft_create_elem(data, len);
	}
	else
		*begin_list = ft_create_elem(data, len);
}

void		ft_print_list(t_list *list, int pass)
{
	ft_putnstr(&list->data[pass],list->len - pass);
	list = list->next;
	while (list)
	{
		ft_putnstr(list->data,list->len);
		list = list->next;
	}
	ft_putchar('\n');
}

char		get_char_list(t_list *list,int num)
{
	int i;

	i = 0;
	while (i < num / STRING)
	{
		if(!(list->next))
		return(list->data[list->len]);
		list = list->next;
		i++;
	}
	return ((list->data)[num % STRING]);
}

void		set_char_list(t_list *list, int num, char c)
{
	int i; 

	i = -1;
	while (list->data[++i] != '\n')
	num++;
	num++;
	i = 0;
	while (i < num / STRING)
	{
		list = list->next;
		i++;
	}
	(list->data)[num % STRING] = c;
}
