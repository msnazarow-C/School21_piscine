/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expr2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 23:17:49 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 00:44:03 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		expr2(char *str)
{
	int		arg1;
	int		arg2;
	char	c;

	arg1 = arg(str);
	skip(str);
	while (str[g_i] == '*' || str[g_i] == '/' || str[g_i] == '%')
	{
		c = str[g_i];
		g_i++;
		skip(str);
		arg2 = arg(str);
		arg1 = calc(arg1, arg2, c);
	}
	return (arg1);
}
