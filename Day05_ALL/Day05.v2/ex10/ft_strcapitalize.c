/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 02:41:19 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/04 18:17:36 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alfanumeric(char c)
{
	int temp;

	temp = (c >= 'a' && c <= 'z') || (c <= '9' && c >= '0');
	return (temp || (c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			while (alfanumeric(str[i]))
				i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] + 'A' - 'a';
			i++;
		}
		while (alfanumeric(str[i]))
			i++;
		i++;
	}
	return (str);
}
