/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 02:52:04 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/04 02:52:17 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] = str[i] + 'a' - 'A';
		i++;
	}
	return str;
}
