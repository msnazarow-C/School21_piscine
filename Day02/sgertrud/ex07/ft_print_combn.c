/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 22:05:09 by sgertrud          #+#    #+#             */
/*   Updated: 2020/01/30 23:23:21 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_combn(int n)
{	
	int i;
	i = 0;
	char digits[n];
	while (i<n)
	{
	digits[i]=i;
	i++;
	}
	i=0;
	while (i<n)
	{

		while (i < n)
	{
		ft_putchar('0' + digits[i]);
		i++;
	}
	digits[i]++;
	i=0;
	}
	/*i = 1;
	while (i <= 89)
	{
		if (i % 10 > i % 100 / 10)
		{
			ft_putchar('0' + i / 10 % 10);
			ft_putchar('0' + i % 10);
			if (i < 89)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
		}
        i++;
	}*/
}
