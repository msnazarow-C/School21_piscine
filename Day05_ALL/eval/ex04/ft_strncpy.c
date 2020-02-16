/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 02:48:52 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/04 23:43:18 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (src[i] == 0)
		{
			while (dest[i])
			{
				dest[i] = 0;
				i++;
			}
			return (dest);
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
