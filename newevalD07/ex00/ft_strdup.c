/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfarwynd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:21:10 by bfarwynd          #+#    #+#             */
/*   Updated: 2020/02/06 19:18:43 by bfarwynd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

char	*ft_strdup(char *src)
{
	char	*ret;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	ret = (char*)malloc(i + 1);
	if (ret == NULL)
		errno = ENOMEM;
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		ret[i] = src[i];
		i++;
	}
	ret[i + 1] = '\0';
	free(ret);
	return (ret);
}
