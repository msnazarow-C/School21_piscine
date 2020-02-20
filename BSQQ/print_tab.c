#include "bsq.h"

void    print_tab(int **tab,int lines, int collums)
{
    int i;
    int j;
    i = -1;
    while (++i <= lines)
        {
            j = -1;
            while(++j <= collums )
                ft_putnbr(tab[i][j]);
            ft_putchar('\n');
        }
}
