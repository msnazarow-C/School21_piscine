/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:09:47 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/04 22:09:55 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_nbr(char *str, int *flag)
{
	int i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		flag[0] = flag[0] + 1;
		i++;
	}
	str = str + flag[0];
	if (str[0] == '-')
	{
		flag[1] = 1;
	}
	else if (str[0] == '+')
	{
		flag[3] = 1;
	}
	i = 0;
	while (str[i] == '0')
	{
		flag[2] = flag[2] + 1;
		i++;
	}
}

void	return_number(char *str, int *n, int *flag)
{
	int i;

	i = 0;
	str = str + flag[0] + flag[1] + flag[2] + flag[3];
	while (str[i] >= '0' && str[i] <= '9')
	{
		*n = (*n * 10) + (str[i] - '0');
		i++;
	}
	if (flag[1])
	{
		*n = *n * -1;
	}
}

int		ft_atoi(char *str)
{
	int n;
	int flag[4];

	flag[0] = 0;
	flag[1] = 0;
	flag[2] = 0;
	flag[3] = 0;
	n = 0;
	check_nbr(str, flag);
	return_number(str, &n, flag);
	return (n);
}
