/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szarabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 00:42:15 by szarabel          #+#    #+#             */
/*   Updated: 2020/02/06 23:01:53 by szarabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*n;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (i == 0)
		return (NULL);
	else
	{
		n = (char*)malloc(i);
		while (src[j] != src[i])
		{
			n[j] = src[j];
			j++;
		}
		return (n);
		free(n);
	}
}
