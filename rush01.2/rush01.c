/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:09:29 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/10 04:36:01 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"
#include "rush01.h"
#include "stdio.h"

void	check(char ***values, int x)
{
	int i[3];

	i[0] = -1;
	while (++i[0] < x)
	{
		i[1] = -1;
		while (++i[1] < 9) 
		{
			if (values[i[0]][i[1]][0])
		{
		//	ft_putchar(values[i[0]][i[1]][0] + 48);
			i[2] = -1;
			while (++i[2] < 9 ) 
			{
				if (i[2] != i[1])
				values[i[0]][i[2]][(int)values[i[0]][i[1]][0]] = 0;
			}
			i[2] = -1;
			while (++i[2] < 9)
				if (i[2] != i[0])
				values[i[2]][i[1]][(int)values[i[0]][i[1]][0]] = 0;
		}
		}
	}
}

void	check2(char ***values, int x)
{
	int i[4];
	i[0] = -1;
while (++i[0] < x)
{
	i[1] = -1;
	while (++i[1] < x)
	{
		if (values[i[0]][i[1]][0])
			{
				i[2] = 3 * (i[0] / 3);
				while (i[2] < 3 * ((i[0] / 3)+1))
				{
					i[3] = 3 * (i[1] / 3);
					while(i[3] < 3 * ((i[1] / 3) + 1))
					{
						if ( i[2] != i[0] && i[3] != i[1])
							values[i[2]][i[3]][(int)values[i[0]][i[1]][0]] = 0;
						i[3]++;
					}
					i[2]++;
				}
			}
	}
}
}

void	check3(char ***values, int x)
{
	int i[3];
	int a;
	int temp;

	i[0] = -1;
	while (++i[0] < x)
	{
		i[1] = -1;
		while (++i[1] < x)
		{
			if (!values[i[0]][i[1]][0])
			{
			i[2] = 0;
			a = 0;
			while (++i[2] < 10)
			{
				if(a == 0)
				temp = i[2];
				a = a + values[i[0]][i[1]][i[2]];
			}	
			if(a == 1)
			{
				values[i[0]][i[1]][0] = temp;
			}
			}
		}
	}
}


void	check4(char ***values, int x)
{
	int a;
	int i[5];

	a = 0;
	i[0] = -1;
	while (++i[0] < x)
	{
		i[1] = -1;
		while (++i[1] < x)
		{
			if (!values[i[0]][i[1]][0])
			{
						i[4] = 0;
				while (++i[4] < 10)
				{
					if (values[i[0]][i[1]][i[4]])
					{
						a = 0;
						i[2] = 3 * (i[0] / 3);
						while (i[2] < 3 * ((i[0] / 3) + 1))
						{
							i[3] = 3 * (i[1] / 3);
							while(i[3] < 3 * ((i[1] / 3) + 1))
							{
								a = a + values[i[2]][i[3]][i[4]];
								i[3]++;
							}	
							i[2]++;
						}
						if (a == 1)
						{
							values[i[0]][i[1]][0] = i[4];
						}
					}
				}
			}
		}
	}
}


int     check5(char ***values, int x)
{
	int a;
	int i[5];

	a = 0;
	i[0] = -1;
	while (++i[0] < x)
	{
		i[1] = -1;
		while (++i[1] < x)
		{
			i[2] = 0;
            a = 0;
            while (++i[2] < 10)
                a += values[i[0]][i[1]][i[2]];
		    if (a == 0)
                return (0);
        }
	}
    return (a);
}


char	****proposal(char ****values,int variant,int *counter)
{
	int i[5];
	int a;
	printf("Proposal %d :\n",*counter);
	i[0] = -1;
	while (++i[0] < 9)
	{
		i[1] = -1;
		while (++i[1] < 9)
		{
			i[2] = 0;
			a = 0;
			while (++i[2] < 10)
			{
				a += (*values)[i[0]][i[1]][i[2]];
			}
			i[2] = 0;
			if (a == 2)
			{
				i[3] = 0;
				while (++i[2] < 10)
				if ((*values)[i[0]][i[1]][i[2]] )
				{
					if (i[3] == 0)
						i[3] = i[2];
					else 
						i[4] = i[2];
				}
				printf("coor:%d %d | %d %d\n",i[0],i[1],i[3],i[4]);
				if (variant == 0)
				{
					printf("v1 choose %d\n",i[4]);
					(*values)[i[0]][i[1]][i[3]] = 0;
				}
				else if(variant == 1)
				{
					printf("v2 choose %d\n",i[3]);
					(*values)[i[0]][i[1]][i[4]] = 0;
				}
				return (values);
			}
		}
	}

	return (values);
}

char	***try(char ***input, int **variant,int *counter)
{
	int i[5];
	char ***values;
	char ****step;

	create(&values);

	//ft_putstr("\nMASSIV input\n");
	//ft_print_double_array(input,9,9);
	//ft_putstr("\nMASSIV values\n");
	//ft_print_double_array(values,9,9);
	copy(&input,&values);

	ft_putstr("\nThis is counter : ");
	ft_putnbr(*counter);
	ft_putchar('\n');

	//	ft_putstr("\nMASSIV values\n");
	//	ft_print_double_array(values,9,9);
			


i[0] = -1;

step = (char****)malloc(sizeof(char***) * 20);  
while (++i[0] < 20)
{
	create(&step[i[0]]);
    // ft_putnbr(i[0]);
   // ft_print_double_array(step[i[0]],9,9);
   }
i[0] = 0;
i[2] = 0;


while (!check6(values) || !(validate(values, 9)))
{
    ft_putstr("CHEK FOR ZEROS : ");
    ft_putnbr(check5(values,9));
    ft_putchar('\n');

       while (!(validate(values, 9)) && check5(values,9))
    {
       	i[1] = -1;
    	while (++i[1] < 100)
    	{
    		check(values,9);
    		check2(values,9);
    		check3(values,9);
    		check4(values,9);
    	}
    	proposal(&values,(*variant)[i[0]],&i[0]);
    	i[1] = -1;
    	while (++i[1] < 100)
       	{
	    	check(values,9);
       		check2(values,9);
	    	check3(values,9);
	    	check4(values,9);
    	}
        copy(&values,&step[i[0]]);
        i[0]++;
   	    ft_print_double_array(values,9,9);
        ft_print_double_array2(values,9,9);
    }
    (*variant)[i[0]] += 1;
    copy(&step[i[0]],&values);
     while ((*variant)[i[0]] > 1)
    { 
        --i[0];
        copy(&step[i[0]],&values);
    }

}	


/*
	ft_print_double_array(values,9,9);
		if (check6(values))
		{
			return(values);	
			ft_putstr("\nReturn_Values\n");
		}	
		else 
		{
			if ()
			{
				ft_putstr("Error\nReturn(0)\n");
				return (-1);
			}
		}	*/
	return (0);
}

int		check6(char*** input)
{
	int i;
	int j;
	int a;

	a = 1;
	i = 0;
	j = 0;
	while (++i < 9 )
	{
		j = -1;
		while (++j < 9)
		{
			a *= input[i][j][0];
			if (a > 100)
				a /= 10;
		}
	}
	return (a);
}
int		validate(char ***values, int x)
{
	int i[3];

	i[0] = -1;
	while (++i[0] < x)
	{
		i[1] = -1;
		while (++i[1] < x)
		{
			i[2] = i[1];
			while (++i[2] < x)
			{
				if (values[i[0]][i[1]][0] == values[i[0]][i[2]][0] && values[i[0]][i[1]][0])
					return (123);
			}
				i[2] = i[0];
			while (++i[2] < x)
			{
				if (values[i[0]][i[1]][0] == values[i[2]][i[1]][0] && values[i[0]][i[1]][0])
					return (123);
			}
		}
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int counter;
	char***input;
	int i;
	int a;
	//int j;
	int k;
	int kol;
	int len;
	int *variant; 
    
    i = 0;
    variant = (int*)malloc(20*sizeof(int));
    while (i < 20)
    variant[i++] = 0;


	
	counter = 0;
	len = 0;
	if (argc == 10)
	{
		i = 0;
		while (++i < argc - 1)
		{
		//	printf("\n%d\n",ft_strlen(argv[i]));
			if (ft_strlen(argv[i]) != 9)
				{
					ft_putstr(argv[i]);
					ft_putstr("\nError");
					return(-1);
				}
		}
		//	printf("Well done!");

		input = input_values(&argv[1], 9, 9);
	}
	else
	{
		ft_putstr("Error");
		return (-1);
	}
	a = 0;
	k = 0;
	kol = 0;
	ft_putstr("\nour array:\n");

	ft_print_double_array(input,9,9);
	try(input,&variant,&counter);
	/*while (a == 0 && kol < 30)
{
	//ft_print_double_array2(input, 9, 9);
	k = 0;
	while (a == 0 && k  < 100)
	{
		i = -1;
		a = 2;
		while (++i < 9 )
		{
			j = -1;
			while (++j < 9)
			{
				a *= input[i][j][0];
				if (a > 100)
					a /= 10;
			//	printf("%d\n",a);
			//;	ft_putchar(input[i][j][0] + 48);
			}
		}
		//	ft_print_double_array2(input, 9, 9);
		check(input,9);
	//	ft_print_double_array2(input, 9, 9);
		check2(input,9);
	//	ft_print_double_array2(input, 9, 9);
		check3(input,9);
	//	ft_putstr("\nBefore\n");
	//	ft_print_double_array2(input, 9, 9);	
	//	ft_print_double_array(input, 9, 9);
		check4(input,9);
	//	ft_putstr("\nAfter\n");
	//	ft_print_double_array2(input, 9, 9);	

		k++;
		//ft_print_double_array(input, 9, 9);
	}
	ft_print_double_array(input, 9, 9);
	
		try(input, 1);
		ft_print_double_array(input, 9, 9);
		//ft_print_double_array2(input, 9, 9);

		kol++;
}*/
	//ft_print_double_array(input, 9, 9);
	//ft_print_double_array2(input, 9, 9);
	printf("\nIt takes %d curcles to solve this sudoku", kol);
}
