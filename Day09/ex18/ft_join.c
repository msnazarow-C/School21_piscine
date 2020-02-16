/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 10:18:37 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/07 10:40:51 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_join(char **tab, char *sep)
{
	int len;
	int i;
	char *out;
	int k;
	int j;

	len = 0;
	i = 0;
	k = 0;
	while (tab[i])
	{
		len += ft_strlen(tab[i++]);
	}
	out = (char*)malloc(len * (sizeof(char)+1));
	i = -1;
	while (tab[++i])
	{
		j = 0;
		while (tab[i][j])
			out[k++] = tab[i][j++];
		out[k++] = *sep;
	}
	return (out);
}

int main()
{
char* a = {"Alla","Bashsa","Serega"};
char b = '|';
printf("%s",ft_join(&a,&b));
}

