/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 05:22:22 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/04 03:42:31 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "Day05.h"

int		main(int argc, char **argv)
{
char   test[63] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\0";
char   *test2 = (char*)malloc(64 *sizeof(char));
   test2 = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\0";
char const test3 = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\0";
	if (argc != 0 || argv[0] != 0)
	{
	}

	printf("%s\n", ft_strcapitalize(test));
	printf("%s\n", &test);
	printf("%s\n", ft_strcapitalize(&test2));
	printf("%s\n",&test);
	printf("%s\n", ft_strcapitalize(test));
	printf("%s\n",*test3);


	return (0);
}
