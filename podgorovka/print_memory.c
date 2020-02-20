/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 11:05:49 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/14 11:44:12 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printbyte(int c,int *inc)
{
	(*inc)++;
	if(c > 0)
		printbyte(c / 16, inc);
	if (c % 16 <= 9)
		ft_putchar(c % 16 + 48);
	else 
		ft_putchar(c % 16 + 55);
	if ((*inc) == 4)
		ft_putchar(' ');
}

void	print_memory2(int *addr, size_t size)
{
	size_t i;
	int j;

	i = -1;
	while (++i < size)
		{
			j = 0;
			printbyte(addr[i],&j);
			while ( j++ < 8)
			ft_putchar('0');
			ft_putchar(' ');
			if (i % 4 == 3)
				ft_putchar('\n');
		}
}


void	print_memory(const void *addr, size_t size)
{
	size_t			i;
	size_t 			j;
	unsigned char	*p;
	char 			*str;

	str = "0123456789abcdef";
	p = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 16 && i + j < size)
		{
			write(1, &str[(*(p + i + j)/16) % 16], 1);
			write(1, &str[*(p + i + j) % 16], 1);
			if (j % 2)
				write(1, " ", 1);
			j += 1;
		}
		while (j < 16)
		{
			write(1, "  ", 2);
			if (j % 2)
				write(1, " ", 1);
			j++;
		}
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (*(p + i + j) >= 32 && *(p + i + j) < 127)
				write(1, p + i + j, 1);
			else
				write(1, ".", 1);
			j += 1;
		}
		write(1, "\n", 1);
		i += 16;
	}
}



int	main(void)
{
	int	tab[10] = {0, 23, 150, 255,
	              12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}
