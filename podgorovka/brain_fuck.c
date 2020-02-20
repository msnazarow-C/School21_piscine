/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain_fuck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 08:01:32 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/14 10:43:03 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != 0)
	{
		str++;
		len++;
	}
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	brain_fuck(char *acc)
{
	unsigned char cpu[2048];
	int j;
	int brc;

	j = 0;
	while (j++ < 2048)
		cpu[j] = 0;
	j = 0;
	brc = 0;

	
	while (*acc)
	{
        if (*acc == '>')
            j++;
        if (*acc== '<')
            j--;
        if (*acc == '+')
            cpu[j]++;
        if (*acc == '-')
            cpu[j]--;
        if (*acc == '.')
            write(1, &cpu[j], 1);
		if (*acc == '[' && !cpu[j])
			{
				brc++;
				while(brc)
				{
					acc++;
					if (*acc == '[')
						brc++;
					if (*acc == ']')
						brc--;
				}
			}
		if (*acc == ']' && cpu[j])
			{
				brc++;
				while (brc)
				{
					acc--;
					if (*acc == '[')
						brc--;
					if (*acc == ']')
						brc++;
				}
			}
		acc++;
	}
  
}
 int		main(int argc, char **argv)
{
		if (argc)
			brain_fuck(argv[1]);
}
