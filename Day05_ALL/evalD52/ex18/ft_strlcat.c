/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:23:41 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/04 22:23:43 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				j;
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	space_left;

	i = 0;
	dest_size = 0;
	space_left = size;
	while (src[i])
		i++;
	src_size = i;
	while (dest[dest_size] && space_left-- != 0)
		dest_size++;
	space_left = size - dest_size;
	if (!space_left)
		return (size + src_size);
	i = 0;
	j = dest_size;
	while (src[i] && space_left-- > 1)
	{
		dest[j++] = src[i++];
	}
	return (src_size + dest_size);
}
