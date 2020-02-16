/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 17:56:06 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/09 05:57:24 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"

void	ft_putchar(char c);
void	ft_putstr(char *c);


int		di(char c)
{
	return (c >= 48 && c <= 58 ? 1 : 0);
}


char	***input_values(char **vs, int x, int y)
{
	char ***in;
	int i[3];

	i[0] = -1;
	in = (char***)malloc(sizeof(char**) * x);
	while (++i[0] < y)
	{
		in[i[0]] = (char**)malloc(sizeof(char*) * y);
		i[1] = -1;
		while (++i[1] < 10)
			in[i[0]][i[1]] = (char*)malloc(sizeof(char) * 10);
	}
	i[0] = -1;
	while (++i[0] < x)
	{
		i[1] = -1;
		while (++i[1] < y)
		{
			in[i[0]][i[1]][0] = di(vs[i[0]][i[1]]) ? vs[i[0]][i[1]] - 48 : 0;
			i[2] = 0;
			if (in[i[0]][i[1]][0])
			{
				while (++i[2] < 10)
					in[i[0]][i[1]][i[2]] = 0;
				in[i[0]][i[1]][(int)in[i[0]][i[1]][0]] = 1;
			}
			else
				while (++i[2] < 10 && i[2] != vs[i[0]][i[1]] - 48)
					in[i[0]][i[1]][i[2]] = 1;
			in[i[0]][i[1]][0] = di(vs[i[0]][i[1]]) ? vs[i[0]][i[1]] - 48 : 0;
		}
	}
	return (in);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_double_array(char ***input, int x, int y)
{
	int i;
	int j;
	int z;
	
	i = -1;
	ft_putstr("\n");
	i = -1;
		while (++i < x)
	{
		j = -1;
		while (++j < y)
		{
			z = 0;
			ft_putchar(input[i][j][0] + 48);
			ft_putchar(' ');
			if (j < y)
				ft_putchar(' ');
			if (!((j + 1) % 3))
				ft_putstr("     ");
			
		}
		if (!((i + 1) % 3))
			ft_putchar('\n');
		ft_putchar('\n');
	}
}

void	ft_print_double_array2(char ***input, int x, int y)
{
	int i;
	int j;
	int z;
	
	i = -1;
	ft_putstr("\n\n    ");
	while(++i < 3)
	{
		j = -1;
		while (++j < 3)
			ft_putstr("123456789  ");
			ft_putstr("     ");
	}
	ft_putstr("\n\n");
	i = -1;
		while (++i < x)
	{
		j = -1;
		ft_putchar(i + 49);
		ft_putstr("   ");
		while (++j < y)
		{
			z = 0;
			while (++z < 10)
				ft_putchar(input[i][j][z] + 48);
			if (j < y)
				ft_putstr("  ");
			if (!((j + 1) % 3))
				ft_putstr("     ");
			
		}
		if (!((i + 1) % 3))
			ft_putstr("\n\n\n");
		ft_putstr("\n\n");
	}
}
