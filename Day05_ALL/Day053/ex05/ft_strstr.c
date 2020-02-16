/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 02:49:10 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/04 22:01:55 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int start;
	int i;

	i = 0;
	start = 0;
	if (*to_find == 0)
		return (str);
	while (str[start] != '\0')
	{
		while (str[start + i] == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
				return (&str[start]);
		}
		start++;
	}
	return (0);
}
