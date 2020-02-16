/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:09:29 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/09 05:57:37 by sgertrud         ###   ########.fr       */
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
//	int temp;

	a = 0;
	i[0] = -1;
	while (++i[0] < x)
	{
		i[1] = -1;
		while (++i[1] < x)
		{
			if (!values[i[0]][i[1]][0])
			{
				//valuesft_putstr("ALLA");
				i[4] = 0;
				while (++i[4] < 10)
				{
					if (values[i[0]][i[1]][i[4]])
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
					//printf("ASDLKJASLDJASLDKJ");
					if (a == 1)
					{
						i[2] = 3 * (i[0] / 3);
						while (i[2] < 3 * ((i[0] / 3)+1))
						{
							i[3] = 3 * (i[1] / 3);
							while(i[3] < 3 * ((i[1] / 3) + 1))
							{
								if (i[2] != i[0] && i[3] != i[1])
									values[i[2]][i[3]][i[4]] = 0;
								i[3]++;
							}
							i[2]++;
						}
					}
				}
			}
		}
	}
}

/*int		try(char ***values, int x)
{

}*/

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
			while (++i[2])
				if (values[i[0]][i[1]] == values[i[0]][i[2]] && values[i[0]][i[1]])
					return (123);
			i[2] = i[1];
			while (++i[2])
				if (values[i[0]][i[1]] == values[i[2]][i[1]] && values[i[0]][i[1]])
					return (123);
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
	char***input;
	int i;
	int a;
	int j;
	int k;
	int kol;
	int len;

	len = 0;
	if (argc == 10)
	{
		i = 1;
		while (argv[i])
			if (ft_strlen(argv[i]) != 9)
				{
					ft_putstr(argv[i]);
					ft_putstr("\nError");
					return(-1);
				}

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
	ft_print_double_array(input, 9, 9);
	while (a == 0 && k < 100)
	{
		kol++;
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
			//	printf("%llu\n",a);
			//	ft_putchar(input[i][j][0] + 48);
			}
		}
	//	ft_print_double_array2(input, 9, 9);
		check(input,9);
	//	ft_print_double_array2(input, 9, 9);
		check2(input,9);
	//	ft_print_double_array2(input, 9, 9);
		check3(input,9);
		ft_putstr("\nBefore\n");
		ft_print_double_array2(input, 9, 9);	
	//	ft_print_double_array(input, 9, 9);
		check4(input,9);
		ft_putstr("\nAfter\n");
		ft_print_double_array2(input, 9, 9);	

		k++;
	//	ft_print_double_array(input, 9, 9);
	}
	ft_print_double_array(input, 9, 9);
	printf("\nIt takes %d curcles to solve this sudoku", kol);
}
