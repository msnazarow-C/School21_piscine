/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:21:50 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/04 22:21:52 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lower(char c)
{
	int num;

	num = (c >= 'a' && c <= 'z');
	return (num);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!lower(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
