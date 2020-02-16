/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:59:30 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/04 22:59:32 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		upper(char c)
{
	int num;

	num = (c >= 'A' && c <= 'Z');
	return (num);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!upper(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
