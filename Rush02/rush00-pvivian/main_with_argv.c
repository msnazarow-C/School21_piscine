/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 15:18:05 by kcedra            #+#    #+#             */
/*   Updated: 2020/02/02 15:27:14 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		rush(int x, int y);

int		main(int argc, char **argv)
{
    int x;
    int y;
    int i;
    
    i = 0;
    x = 0;
    while (argv[1][i] != '\0')
    {
        x = x * 10;
        x += argv[1][i] - '0';
        i++;
    }
    
    i = 0;
    y = 0;
    while (argv[2][i] != '\0')
    {
        y = y * 10;
        y += argv[2][i] - '0';
        i++;
    }
    
    if (argc != 3)
        write(2, "Number of arguments should be 2\n", 32);
    else
        rush(x, y);
	return (0);
}
