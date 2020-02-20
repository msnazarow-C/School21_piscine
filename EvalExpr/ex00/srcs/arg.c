/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 23:02:42 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 03:15:00 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		arg(char *str)
{
	int out;
	int negative;

	out = 0;
	negative = 1;
	skip(str);
	if (str[g_i] == '+' || str[g_i] == '-')
	{
		if (str[g_i] == '-')
			negative = -1;
		(g_i)++;
	}
	if (str[g_i] == '(')
	{
		g_i++;
		skip(str);
		out = eval_expr(str);
		if (str[g_i] == ')')
			g_i++;
		skip(str);
		return (negative * out);
	}
	while (isd(str[g_i]))
		out = out * 10 + str[g_i++] - 48;
	return (negative * out);
}
