/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:42:04 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/04 22:42:07 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int size_backup;

	i = 0;
	j = 0;
	size_backup = size;
	while (size > 1 && (dest[i] = src[i]))
	{
		dest[i] = src[i];
		size--;
		i++;
	}
	if (size_backup)
	{
		dest[i] = '\0';
		while (src[j])
		{
			j++;
		}
	}
	return (j);
}
