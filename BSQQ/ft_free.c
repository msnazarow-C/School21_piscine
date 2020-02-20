#include "bsq.h"

void ft_free(int **tab ,int lines)
{
    int i;
    
    i = -1;
    while(++i < lines)
    {
        free(tab[i]);
        tab[i] = 0;
    }
    free (tab);
    tab = 0;
}