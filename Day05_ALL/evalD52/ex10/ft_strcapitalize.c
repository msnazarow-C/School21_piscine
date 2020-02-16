/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:21:16 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/04 22:21:18 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		num_letters(char c)
{
	return ((c >= '0' && c <= '9') ||
			(c >= 'A' && c <= 'Z') ||
			(c >= 'a' && c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (!num_letters(str[i]))
		{
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		while (num_letters(str[i]))
		{
			i++;
		}
	}
	return (str);
}
