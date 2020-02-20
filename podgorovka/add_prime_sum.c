/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 01:46:57 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/14 05:07:02 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MININT -2147483648
#include "unistd.h"
#include "ft.h"

int		isprime(int a)
{
	int i;
	
	i = 1;
	while (++i < a)
		if (!(a % i))
			return (0);
	return (1);
}

int		add_prime_sum(int a)
{
	int i;
	int sum;

	i = 1;
	sum = 0;
	while (++i <= a)
	{
		if (isprime(i))
			sum += i;	
	}
	return (sum);
}

void	ft_putnbr(int a)
{
		if (a < 0)
		{
			write(1, "-", 1);
		}
		if (a / 10 != 0)
		{
			ft_putnbr(a > 0 ? a / 10 : (a / 10) * (-1));
			a = a > 0 ? a % 10 + 48 : (a % 10) * (-1) + 48;
			write (1, &a, 1);
		}
		else
		{
			a = a > 0 ? a + 48 : -a + 48;
			write (1, &a, 1);
		}
}

int		ft_atoi(char *str)
{
	int out;
	char negative;

	out = 0;
	negative = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		{
			negative = 1;
			str++;
		}
	if (*str == '+')
		str++;
	while (*str >= 48 && *str <= 48 + 10)
		{
			out = out * 10 - (*str - 48);
			str++;
		}
	return (negative ? out : out * (-1));

}

int		ft_atoi_base(char *str, int base)
{
	int out;
	char negative;

	out = 0;
	negative = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		{
			negative = 1;
			str++;
		}
	if (*str == '+')
		str++;
	if (base >= 2 && base <= 10)
		while (*str >= 48 && *str <= 48 + base)
		{
			out = out * base - (*str - 48);
			str++;
		}
	else if (base >= 11 && base <= 35)
		while ((*str >= 48 && *str <= 58) || (*str >= 65 && *str <= 55 + base) || (*str >= 97 && *str <= 87 + base))
		{
			out = *str >= 97 ?  out * base - (*str - 87) : *str >= 65 ? out * base - (*str - 55): out * base - (*str - 48) ;
			str++;
		}
	return (negative ? out : out * (-1));
}

int		main(int argc, char **argv)
{
	if (argc == 2 && argv[0])
		ft_putnbr(add_prime_sum(ft_atoi_base(argv[1],10) > 0 ? ft_atoi_base(argv[1],10) : 0));
	else 
		write(1, "0", 1);
		write(1, "\n", 1);
}
