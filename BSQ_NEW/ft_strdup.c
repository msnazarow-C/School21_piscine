/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 23:11:17 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 23:11:18 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
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

char	*ft_strndup(char *src, int len)
{
	char *temp;

	temp = (char *)malloc((len + 1) * sizeof(char));
	ft_strncpy(temp, src, len);
	temp[len] = '\0';
	return (temp);
}