/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 05:06:20 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/07 05:38:56 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int lenght)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < lenght)
	{
		while (tab[i] == 0 && i < lenght)
			i++;
		while (tab[i] && i != j && i < lenght)
		{
			tab[j++] = tab[i++];
		}
	}
	return (i - j);
}
