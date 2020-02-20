/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:41:30 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 21:41:32 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void    reading_string(int argc, char **argv, int f)
{
    int i;

    i = 0;
    while (++i < argc)
    {
        f = open(argv[i],O_RDONLY);
        if (f == -1 ) 
        {
            ft_puterror(argv[i]);
            ft_puterror(": map error\n");
        }
        else if (make_tab(f))
        {
            ft_puterror(argv[i]);
            ft_puterror(": map error\n"); 
        }
        else if (i != argc - 1)
            ft_putchar('\n');            
        close(f);
    } 
}

int    main(int argc, char **argv)
{
    int f;
    int i;
    clock_t t; 

    t = clock();
    i = 0;
    if ((f = 0) || argc == 1)
        if (make_tab(f))
            ft_puterror("map error\n");
    reading_string(argc, argv, f);
    return 0;
}
