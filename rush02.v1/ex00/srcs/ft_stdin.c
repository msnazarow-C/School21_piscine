/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 05:00:39 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 06:26:09 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_stdin(void)
{
	char	buff[STRING];
	int		i;
	t_list	*out;

	out = NULL;
	while ((i = read(0, &buff, STRING - 1)))
	{
		buff[i] = '\0';
		ft_list_push_back(&out, buff);
	}
	return (out);
}
