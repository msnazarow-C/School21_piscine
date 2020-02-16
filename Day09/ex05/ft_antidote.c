/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 21:21:11 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/06 21:40:35 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (i > j)
	{
		if (i < k)
		{
			return (i);
		}
		else if (j > k)
		{
			return (j);
		}
	}
	else if (i > k)
		return (i);
	else if (j > k)
		return (k);
	else
		return (j);
	return (0);
}
