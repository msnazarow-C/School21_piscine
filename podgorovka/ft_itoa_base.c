/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 20:28:56 by exam              #+#    #+#             */
/*   Updated: 2020/02/07 21:27:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	makedigit(int a)
{
	if (a >= 0 && a <= 9)
		return (a + '0');
	if (a >= 10 && a <= 16)
		return (a - 10 + 'A');
	return (0);
}

char	*ft_itoa_base(int value, int base)
{
	char *out;
	int len;
	int temp;
	int i;

	i = 0;
	if (value == -2147483648 && base == 10)
		return ("-2147483648");
	if (value > 0)
		temp = value;
	else
		temp = value * (-1);
	len = 2;
	while (temp >= base)
	{
		temp /= base;
		len++;
	}
	if ( base == 10 && value < 0 )
	{
		len++;
		out = (char *)malloc((len) * sizeof(char));
		out[0] = '-';
	}
	else
		out = (char *)malloc(len * sizeof(char));
	if (value > 0)
		temp = value;	
	else 
		temp = value * (-1);
	out[len-1] = '\0';

	while (temp > 0)
	{
		out[len-i-2] = makedigit(temp % base);
		temp /= base;
		i++;
	}
	return (out);	
}
