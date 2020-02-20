/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:42:48 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 01:42:52 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char		*ft_strncpy2(char *dest, char **src, unsigned int n)
{
	unsigned int i;

	i = -1;
	while (++i < n)
	{
		if (**src == 0)
		{
			dest[i] = 0;
			return (dest);
		}
		dest[i] = **src;
		(*src)++;
	}
	while (**src == '\n' || **src == '\r')
		(*src)++;
	return (dest);
}

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
