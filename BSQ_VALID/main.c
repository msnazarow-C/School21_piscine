/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include "bsq.h"


int    main(int argc, char **argv)
{
    int f;
    int i;
  
    i = 0;
    if (argc == 1)
    {
        f = 0;
        if (make_tab(f))
            ft_putstr("map error\n");
    }
    while (++i < argc)
    {
        f = open(argv[i],O_RDONLY);
        if (f == -1 ) 
        {
            ft_putstr(argv[i]);
            ft_putstr(": map error\n");
        }
        else if (make_tab(f))
        {
            ft_putstr(argv[i]);
            ft_putstr(": map error\n"); 
        }
        close(f);
    }
    return 0;
    
}
