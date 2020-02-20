/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:45:27 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 20:47:25 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int    make_tab(int f)
{
    int **map;
    char *buf;
    t_list *list;
    int i;
    int j;
    char symbols[3];
    char *pb;
    t_size size;
    t_max max;
    char c;
    int pass;
    int temp;
	int len;
	int ftemp;
	int flag ;

	flag = 0;
	ftemp = open(".temp",O_RDWR);
    if(!(buf = (char *)malloc(sizeof(char) * STRING)))
        return (-1);
    max.count = 0;
    list = 0;
    len = 0;
	i = 0;
    if (f == 0)
    {
		j = read(f,buf, STRING);
		len += j;
		if (j < 10)
		{
			while ((j = read(f,&buf[len], STRING)) > 0)
				len += j;
			ft_list_push_back(&list,buf,STRING);
		}
		else
		{
			ft_list_push_back(&list,buf,STRING);
        	while ((j = read(f,buf, STRING)) > 0)
        	{
			ft_list_push_back(&list,buf,STRING);
        	}
		}

    }
	else if ((j = read(f,buf, STRING)) <= 0)
           {
                free(buf);
                buf = NULL;
                return (-1);
           }
    else 
    {
        ft_list_push_back(&list,buf,j);
        while ((j = read(f,buf, STRING)) > 0)
        {
            ft_list_push_back(&list,buf,j);
        }
    }
    pb = list->data;
    pass = 0;
    while (pb[pass] != '\n' && pb[pass])
	    ++pass;
	ft_strncpy(symbols, &pb[pass - 3], 3);
	pb = list->data;
    if(get_int_symbols(&pb, pass - 2 , &(size.lines), symbols))
    {
        ft_list_clear(&list);
        free(buf);
        buf = NULL;
        return (-1);    
    }
    size.collums = 0;
    pb++;
    temp = pass + 1;
    c = get_char_list(list,(size.collums + pass + 1));
    while (c != '\n' && c)
      {
        size.collums++;
         c = get_char_list(list,(size.collums + pass + 1));
      }
   if (!size.lines || !size.collums)
    {
        free(buf);
        buf = NULL;
        ft_list_clear(&list);
        return (-1);    
    }
    map = (int**)malloc(2 * sizeof(int*));
    i = 0;
    j = -1;
    map[0] = (int*)malloc((size.collums + 1)* sizeof(int));
    map[1] = (int*)malloc((size.collums + 1)* sizeof(int));
    while (++j <= size.collums)
                    map[i][j] = 0;

        while (++i <= size.lines)
        {
                map[i % 2][0] = 0;
                j = -1;
                while (++j < size.collums)
                {
                    c = get_char_list(list,(j + pass + 1));
                    if (c == symbols[0])
                    {
                        map[i % 2][j + 1] = min(map[!(i % 2)][j + 1],map[!(i % 2)][j],map[i % 2][j]) + 1;
                        max = max_count(max, j + 1, i, map[i % 2][j + 1]);
                    }
                    else if (c == symbols[1])
                        map[i % 2][j + 1] = 0;
                    else
                    {
                        free(buf);
                        buf = NULL;
                        ft_list_clear(&list);
                        free(map[0]);
                        free(map[1]);
                        free(map);
                       return(-1);
                    }
                }
                c = get_char_list(list,j + pass + 1);
                if (c != '\n')
                {
                    free(buf);
                    buf = NULL;
                    free(map[0]);
                    free(map[1]);
                    free(map);
                    ft_list_clear(&list);
                    return (-1);
                }
                pass += (size.collums + 1);
        }
    c = get_char_list(list,(pass + 1));
   if (c != '\0')
   {
        free(buf);
        buf = NULL;
        free(map[0]);
        free(map[1]);
        free(map);
        ft_list_clear(&list);
        return (-1);
   }
    change_pb(list,max,size,symbols[2]);
    ft_print_list(list,temp);
    ft_list_clear(&list);
    free(map[0]);
    free(map[1]);
    free(map);
    free(buf);
    map = NULL;
    buf = NULL;
    return (0);
}
