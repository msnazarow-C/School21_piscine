/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbacon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:54:30 by tbacon            #+#    #+#             */
/*   Updated: 2020/02/06 17:47:23 by tbacon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

char	*ft_strdup(char *src)
{
	char	*rezult;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	rezult = (char*)malloc(sizeof(*rezult) * (len + 1));
	if (rezult == 0)
		returnt(NULL);
	while (i < len)
	{
		rezult[i] = src[i];
		i++;
	}
	rezult[i] = '\0';
	return (rezult);
}
