#include "bsq.h"

void    reading_user(int f)
{
    g_s.j = read(f, g_s.buf, STRING);
        g_s.len += g_s.j;
    if (g_s.j < 10)
    {
        while ((g_s.j = read(f, &g_s.buf[g_s.len], STRING)) > 0)
            g_s.len += g_s.j;
        ft_list_push_back(&g_s.list, g_s.buf, g_s.len);
    }
    else
    {
        ft_list_push_back(&g_s.list, g_s.buf, g_s.j);
        while ((g_s.j = read(f, g_s.buf, STRING)) > 0)
            ft_list_push_back(&g_s.list, g_s.buf, g_s.j);
    }
}

int     reading(int f)
{
    if (!(g_s.buf = (char *)malloc(sizeof(char) * STRING)))
        return (-1);
    g_s.max.count = 0;
    g_s.list = 0;
    g_s.i = 0;
    g_s.len = 0;
    if (f == 0)
        reading_user(f);
    else if ((g_s.j = read(f, g_s.buf, STRING)) <= 0)
    {
        free(g_s.buf);
        g_s.buf = NULL;
        return (-1);
    }
    else 
    {
        ft_list_push_back(&g_s.list, g_s.buf, g_s.j);
        while ((g_s.j = read(f, g_s.buf, STRING)) > 0)
            ft_list_push_back(&g_s.list,g_s.buf, g_s.j);
    }
    return (0);
}