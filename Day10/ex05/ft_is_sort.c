/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 22:49:57 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/11 23:19:17 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	if (length == 1 || length == 0)
		return (1);
	i = 0;
	while (i < length - 1 && f(tab[i], tab[i + 1]) <= 0)
		i++;
	if (i == length - 1)
		return (1);
	return (0);
}
