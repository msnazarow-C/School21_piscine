/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfarwynd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:39:29 by bfarwynd          #+#    #+#             */
/*   Updated: 2020/02/05 20:25:08 by bfarwynd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int ii;

	i = 0;
	ii = 0;
	while (dest[i] != '\0')
		i++;
	while (src[ii] != '\0')
		dest[i++] = src[ii++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*ret;
	int		i;

	ret = (char*)malloc(8 * (argc - 1));
	i = 0;
	while (++i < argc)
	{
		ret = ft_strcat(ret, argv[i]);
		if (i < argc - 1)
			ret = ft_strcat(ret, "\n");
	}
	free(ret);
	return (ret);
}
