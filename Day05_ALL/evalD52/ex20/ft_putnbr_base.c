/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:24:07 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/04 22:24:08 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

static int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' \
				&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		while (base[z])
			if (base[i] == base[z++])
				return (0);
		i += 1;
	}
	return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	size;
	int	n[10];

	i = 0;
	size = 0;
	if (!check_base(base))
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	while (base[size])
		size += 1;
	while (nbr)
	{
		n[i] = nbr % size;
		nbr /= size;
		i += 1;
	}
	while (i > 0)
		ft_putchar(base[n[--i]]);
}
