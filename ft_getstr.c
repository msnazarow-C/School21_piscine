/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 23:56:51 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 01:52:11 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "stdlib.h"

char	*ft_getstr(int f)
{
	char	*c;
	c = (char*)malloc(STRING);
	int		i;

	i = 0;
	c[i] = ft_getchar(f);
	while (++i < STRING)
		c[i] = ft_getchar(f);
	return (c);
}
