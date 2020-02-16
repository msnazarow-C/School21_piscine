/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 08:58:58 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/07 09:00:52 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int lenght)
{
	int i;
	int out;

	i = 0;
	while (i < lenght)
	{
		if (tab[i] > out)
			out = tab[i];
		i++;
	}
	return (out);
}