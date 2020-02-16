/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 06:57:11 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/07 07:22:37 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "ft_fight.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_fight(t_perso *p1, t_perso *p2, char *a)
{
	if (a == KICK)
		p2->life -= 15;
	if (a == PUNCH)
		p2->life -= 5;
	if (a == HEADBUTT)
		p2->life -= 20;
	ft_putstr(p->name);
	ft_putstr(" does a judo ");
	ft_putstr(a);
	ft_putstr(" on ");
	ft_putstr(p2->name);
	ft_putstr("\n");
	if (p2->life <= 0)
	{
		ft_putstr(p2->name);
		ft_putstr(" is dead.\n");
	}
}
