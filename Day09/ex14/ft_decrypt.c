/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 05:50:03 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/07 06:40:32 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include "stdlib.h"

int		check(char c)
{
	return (c == '\t' || c == '\n' || c == ' ');
}

char	*ft_strncpy(char *dst, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		ft_atoi(char *str)
{
	int		i;
	int		out;
	char	flag;

	flag = 0;
	i = 0;
	out = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		flag = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = out * 10 + str[i] - '0';
		i++;
	}
	if (flag)
		out *= (-1);
	return (out);
}

int		number(char *str)
{
	int i;
	int out;

	out = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ';')
			out++;
	}
	return (out);
}

t_perso	**ft_decrypt(char *str)
{
	int 	i;
	int 	j;
	t_perso	**out;
	int 	l;
	char *temp;

	l = 0;
	j = 0;
	i = 0;
	out = (t_perso**)malloc((number(str) + 1) * sizeof(t_perso*));
	if (!out)
		return (0);
	while (str[i])
	{	
		l++;
		if (str[i] == '|')
		{	
			temp = (char *)malloc(sizeof(char)*l);
			out[j] = (t_perso*)malloc(sizeof(t_perso));
			out[j].Age = ft_atoi(ft_strncpy(temp, &str[i - l], l);
			l = 0;
		}
		i++;
		if (str[i] == ';')
		{
			temp = (char *)malloc(sizeof(char)*l);
			out[j] = (t_perso*)malloc(sizeof(t_perso));
			out[j].name = ft_strncpy(temp, &str[i - l], l);
			l = 0;
			j++;
		}
	}
	out[j] = 0;
	return (out);
}

