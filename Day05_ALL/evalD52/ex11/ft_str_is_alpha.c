/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:21:27 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/04 22:21:28 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		letters(char c)
{
	int upper;
	int lower;

	upper = (c >= 'A' && c <= 'Z');
	lower = (c >= 'a' && c <= 'z');
	return (upper || lower);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!letters(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
