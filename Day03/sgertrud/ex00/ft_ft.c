/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 23:54:50 by sgertrud          #+#    #+#             */
/*   Updated: 2020/01/31 00:03:02 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
void	ft_ft(int *nbr)
{
	*nbr	= 42;
}
int	main()
{
	int a;

	a=10;
	ft_ft(&a);
	printf("%d",a);
}

