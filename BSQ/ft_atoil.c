/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:32:59 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 01:33:01 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		min(int a, int b, int c)
{
	if (a <= b)
	{
		if (a <= c)
			return (a);
		else
			return (c);
	}
	else if (b < a)
	{
		if (b <= c)
			return (b);
		else
			return (c);
	}
	return (0);
}

int		ft_atoil2(char **str, int len, char c)
{
	int		out;
	char	negative;
	int		i;

	i = 0;
	out = 0;
	negative = 0;
	while ((*(*str) >= 9 && *(*str) <= 13) || *(*str) == ' ')
		(*str)++;
	if (*(*str) == '-')
	{
		negative = 1;
		(*str)++;
	}
	if (*(*str) == '+')
		(*str)++;
	while (*(*str) >= 48 && *(*str) <= 48 + 10 && ++i < len)
	{
		out = out * 10 - (*(*str) - 48);
		(*str)++;
	}
	if (**str != c)
		return (0);
	return (negative ? out : out * (-1));
}
