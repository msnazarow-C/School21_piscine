/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 17:16:46 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/06 17:41:15 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_takes_place(int hour)
{
	if (hour >= 0 || hour <= 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour == 12)
			printf("12.00 P.M. AND 1.00 P.M.\n");
		else if (hour < 11 && hour > 0)
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
		else if (hour == 0 || hour == 24)
			printf("12.00 A.M. AND 01.00 A.M.\n");
		else if (hour == 11)
			printf("11.00 A.M. AND 12.00 P.M.\n");
		else if (hour == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");
		else if (hour > 12)
			printf("%d.00 P.M. AND %d.00 P.M.\n", (hour - 12), (hour - 11));
	}
}
