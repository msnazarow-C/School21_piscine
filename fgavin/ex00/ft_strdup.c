/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgavin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:11:44 by fgavin            #+#    #+#             */
/*   Updated: 2020/02/06 19:25:30 by fgavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int		ft_strlen(char *str)
{
	unsigned int		len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char				*ft_strdup(char *src)
{
	char				*res;
	char				*start;
	unsigned int		len;

	len = ft_strlen(src);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	start = res;
	while (*src)
	{
		*res++ = *src++;
	}
	res = 0;
	return (start);
}
