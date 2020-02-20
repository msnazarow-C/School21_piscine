#include "bsq.h"

int    make_tab(int f)
{
    int **map;
    char *buf;
    t_list *list;
    if(!(buf = (char *)malloc(sizeof(char) * STRING)))
        return (-1);
    int i;
    int j;
    char symbols[3];
    char *pb;
    t_size size;
    t_max max;
    char c;
    int pass;
    int temp;
    
    max.count = 0;
    list = 0;
    i = 0;
    if (f == 0)
    {
        while ((j = read(f,buf, STRING)) > 0)
        {
            ft_list_push_back(&list,buf,j);
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
//    set_last_list(list, len, '\0');
    pb = list->data;
    pass = 0;
    //pb = buf;
    while (pb[pass] != '\n' && pb[pass])
	    ++pass;
  //  ft_putnbr(pass);
	ft_strncpy(symbols, &pb[pass - 3], 3);
	pb = list->data;
//	ft_putstr(symbols);
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
/*    ft_putstr("collums :");
    ft_putnbr(size.collums);
    ft_putchar('\n');
    ft_putstr("lines :");
    ft_putnbr(size.lines);
    ft_putchar('\n');*/
    map = (int**)malloc(2 * sizeof(int*));
    i = 0;
    j = -1;
    map[0] = (int*)malloc((size.collums + 1)* sizeof(int));
    map[1] = (int*)malloc((size.collums + 1)* sizeof(int));
       //ft_print_list(list, pass + 1);
        //ft_putchar('\n');
    while (++j <= size.collums)
                    map[i][j] = 0;

        while (++i <= size.lines)
        {
                map[i % 2][0] = 0;
                j = -1;
                while (++j < size.collums)
                {
                    c = get_char_list(list,(j + pass + 1));
                    //ft_putchar(c);
                    //ft_putnbr(j+pass+1);
                   // ft_putchar(' ');
                    if (c == symbols[0])
                    {
                        map[i % 2][j + 1] = min(map[!(i % 2)][j + 1],map[!(i % 2)][j],map[i % 2][j]) + 1;
                        
                        max = max_count(max, j + 1, i, map[i % 2][j + 1]);
                    }
                    else if (c == symbols[1])
                        map[i % 2][j + 1] = 0;
                    /*else
                    {
                        free(buf);
                        buf = NULL;
                        ft_list_clear(&list);
                        free(map[0]);
                        free(map[1]);
                        free(map);
                       return(-1);
                    }*/
                    //ft_putnbr(map[i % 2][j + 1]);
                }
               // ft_putchar('\n');
                c = get_char_list(list,j + pass + 1);
                /*if (c != '\n')
                {
                free(buf);
                buf = NULL;
                free(map[0]);
                    free(map[1]);
                     free(map);
                    ft_list_clear(&list);
                    return (-1);
                }*/
                pass += (size.collums + 1);
        }
    c = get_char_list(list,(pass +j + 1));
   /*if (c != '\0')
   {
        free(buf);
        buf = NULL;
        free(map[0]);
        free(map[1]);
        free(map);
        ft_list_clear(&list);
        return (-1);
   }*/
   /* while (*pb != '\n' && *pb != '\r')
	    pb++;
	while (*pb == '\n' || *pb == '\r')
	    pb++;*/

    //ft_putchar('\n');
    //print_tab(map,size.lines,size.collums);
    //bsq(pb,map,size,symbols[2]);
    change_pb(list,max,size,symbols[2]);
    ft_print_list(list,temp);
    //ft_free(map,size.lines);
    ft_list_clear(&list);
    free(map[0]);
    free(map[1]);
    free(map);
    free(buf);
    buf = NULL;
    return (0);

}