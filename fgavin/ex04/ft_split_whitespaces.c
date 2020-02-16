/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgavin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:34:16 by fgavin            #+#    #+#             */
/*   Updated: 2020/02/07 12:37:26 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include <stdlib.h>
#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	while (**tab)
	{
		ft_putstr(*tab++);
	}
}
char	**mem_for_rows(char *str)
{
	char	**res;
	char	*cp_str;
	int		len;

	cp_str = str;
	len = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n' && (*(str + 1) == 0 ||
				*(str + 1) == ' ' || *(str + 1) == '\t' || *(str + 1) == '\n'))
			len++;
		str++;
	}
	printf("%d",len);
	res = (char **)malloc(sizeof(char *) * (len + 1));
	if (res == NULL)
		return (NULL);
	return (res);
}

void	mem_for_columns(char *str, char **dest)
{
	int len;
	int count;

	count = 0;
	len = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
			len++;
		else if (len > 0)
		{
			dest[count] = (char *)malloc(sizeof(char) * (len + 1));
			len = 0;
			count++;
		}
		if (len > 0 && *(str + 1) == 0)
			dest[count] = (char *)malloc(sizeof(char) * (len + 1));
		str++;
	}
	//dest[++count] = (char *)malloc(sizeof(char));
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	char	*cp_str;
	int		i;
	int		j;

	cp_str = str;
	i = 0;
	j = 0;
	res = mem_for_rows(str);
	mem_for_columns(str, res);
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
			res[i][j++] = *str;
		else if ((*str == ' ' || *str == '\t' || *str == '\n') &&
				str != cp_str && (*(str - 1) != ' ' && *(str - 1) != '\t'
					&& *(str - 1) != '\n') && *(str + 1) != 0)
		{
			res[i++][j] = 0;
			j = 0;
		}
		str++;
	}
	printf("%d\n",i);
    res[i] =  0;
	return (res);
}

int main()
{
    char * a= "asdf qwerty zxcv ";
    char ** s = ft_split_whitespaces(a);

	ft_print_words_tables(s);
   // for (int i = 0; i < 3 ; i++)

   //     printf("%s\n",s[i]);
}
