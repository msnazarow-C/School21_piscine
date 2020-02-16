/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:21:35 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/04 22:21:40 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		numeric(char c)
{
	int num;

	num = c >= '0' && c <= '9';
	return (num);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!numeric(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
