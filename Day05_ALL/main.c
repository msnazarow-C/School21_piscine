#include "Day05.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
int		main(int argc, char *argv[])
{
	//char test3[50] = {0};
	if (argc != 0)
	switch (argv[1][0])
	{
/*		case '0' :  ft_putstr("----------\nex00:\n");ft_putstr(argv[2]);ft_putchar('\n'); ft_putstr("ALLA\0ANDERY");break;
		case '1' :  ft_putstr("----------\nex01:\n");ft_putnbr(2147483647);ft_putchar('\n');ft_putnbr(-2147483648);ft_putchar('\n');ft_putnbr(1100);
					ft_putchar('\n');ft_putnbr(-1100);ft_putchar('\n');break;
		case '2' :  ft_putstr("----------\nex02:\n");
					ft_putstr("Tvoi Vivod:\n");
					ft_putnbr(ft_atoi("\t\n\v\f\r +2147483647"));ft_putchar('\n');
					ft_putnbr(ft_atoi("\t\n\v\f\r -2147483648"));ft_putchar('\n');		
					ft_putnbr(ft_atoi("000111000"));ft_putchar('\n');				
					ft_putnbr(ft_atoi("-000111000"));ft_putchar('\n');								
					ft_putnbr(ft_atoi("\t\n\v\f\r  123456\t\n\v\f\r 789"));ft_putchar('\n');			
					ft_putnbr(ft_atoi("-123hb456"));ft_putchar('\n');								
					ft_putnbr(ft_atoi("-123 456"));ft_putchar('\n');
					ft_putnbr(ft_atoi("--1230+4"));ft_putchar('\n');
				
					printf("Originalniy vivod : \n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",
					atoi("\t\n\v\f\r +2147483647"),
					atoi("\t\n\v\f\r -2147483648"),
					atoi("000111000"),atoi("-000111000"),
					atoi("\t\n\v\f\r  123456\t\n\v\f\r 789"),
					atoi("-123hb456"),atoi("-123 456"),atoi("--1230+4"));						
					break;
		case '3' :  ft_putstr(strcpy(test3,"\t\n\v\f\r  123456\t\n\v\f\r 789"));
					printf("%s",strcpy(test3,"\t\n\v\f\r  123456\t\n\v\f\r 789"));
*/		case '1' : ft_putnbr(ft_str_is_alpha(argv[2])); 
	}
	return 0;
}
