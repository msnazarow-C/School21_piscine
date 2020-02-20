/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 23:12:57 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 03:10:34 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		eval_expr(char *str)
{
	int		arg1;
	int		arg2;
	char	c;

	skip(str);
	arg1 = arg(str);
	skip(str);
	while (str[g_i] && str[g_i] != ')')
	{
		skip(str);
		c = str[g_i];
		g_i++;
		skip(str);
		if (c == '+' || c == '-')
			arg2 = expr2(str);
		else
			arg2 = arg(str);
		arg1 = calc(arg1, arg2, c);
	}
	return (arg1);
}
