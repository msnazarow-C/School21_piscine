/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgavin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:44:47 by fgavin            #+#    #+#             */
/*   Updated: 2020/02/06 19:21:10 by fgavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		len;
	char	*str;
	int		i;
	int		j;
	int		cp_argc;

	i = 0;
	cp_argc = argc;
	len = 0;
	while (--argc >= 1)
		len += ft_strlen(*(argv + argc)) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	while (++i < cp_argc)
	{
		j = 0;
		while (argv[i][j])
			*str++ = argv[i][j++];
		*str++ = '\n';
	}
	*str = 0;
	return (str - len);
}
