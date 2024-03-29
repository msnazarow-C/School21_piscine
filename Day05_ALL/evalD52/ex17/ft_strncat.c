/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:23:32 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/04 22:23:34 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (dest[i + j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
