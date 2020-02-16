/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 23:54:28 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/07 00:34:16 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		change(char a, char b)
{
	return (a == b || a - b == 32 || a - b == -32);
}

char	*cp(char *str, char *s)
{
	int i;
	int j;

	i = 0;
	if (!s[0])
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (change(str[i + j], s[j]))
		{
			if (!s[j + 1])
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		compare(char *a)
{
	return (cp(a, "bauer") || cp(a, "president") || cp(a, "kill"));
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		if (compare(argv[i]))
			ft_putstr("Alert!");
		i++;
	}
}
