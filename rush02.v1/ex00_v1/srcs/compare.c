/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 13:18:45 by pvivian           #+#    #+#             */
/*   Updated: 2020/02/16 13:23:51 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		first_line(t_list *list, int collums,
int lines, char *a, char *b, char *c)
{
	int i;

	if (!list)
		return (0);
	if (list->data[0] != a)
		return (1);
	i = 1;
	while (list)
	{
		while (list->data[i] && list->data[i] != c)
		{
			if (list->data != b)
				return (1);
			i++;
		}
	}
	return (0);
}

void	compare(t_list *list, int collums, int lines)
{
	rush[0] += first_line(list, collums, lines, 'o', '-', 'o');
	rush[0] += middle(list, collums, lines, '|');
	rush[0] += last_line(list, collums, lines, 'o', '-', 'o');
	rush[1] += first_line(list, collums, lines, '/', '*', '\\');
	rush[1] += middle(list, collums, lines, '*');
	rush[1] += last_line(list, collums, lines, '\\', '*', '/');
	rush[2] += first_line(list, collums, lines, 'A', 'B', 'A');
	rush[2] += middle(list, collums, lines, 'B');
	rush[2] += last_line(list, collums, lines, 'C', 'B', 'C');
	rush[3] += first_line(list, collums, lines, 'A', 'B', 'C');
	rush[3] += middle(list, collums, lines, 'B');
	rush[3] += last_line(list, collums, lines, 'A', 'B', 'C');
	rush[4] += first_line(list, collums, lines, 'A', 'B', 'C');
	rush[4] += middle(list, collums, lines, 'B');
	rush[4] += last_line(list, collums, lines, 'C', 'B', 'A');
}
