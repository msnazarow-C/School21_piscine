/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 23:12:15 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 23:35:55 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void ft_buffer(int n, int f,char *argv)
{
	int len;
	int bits;
	char *buffer;
	char out[STRING];

	len = 0;
	while ((bits = read(f, out , STRING)) > 0)
	len += bits;
	buffer = (char*)malloc(len);
	close(f);
	f = open(argv,O_RDONLY);
	len = 0;
	while ((bits = read(f, &buffer[len] , STRING)) > 0 )
	len += bits;
	if (n > len)
	write(1, &buffer[0], len);
	else
	write(1, &buffer[len - n], n);
}
