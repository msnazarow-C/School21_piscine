/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:11:22 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/06 22:50:36 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int	len;
	char*out;
	int i;
	int	j;
	int k;

	len = 0;
	i = 1;
	while (i < argc)
		len += ft_strlen(argv[i++]);
	if (len < 0)
		return (0);
	out = (char*)malloc(len * sizeof(char));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			out[k++] = argv[i][j++];
		i++;
		if (i < argc)
			out[k++] = '\n';
	}
	return (out);
}
