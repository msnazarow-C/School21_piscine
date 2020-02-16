/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:23:07 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/05 17:17:02 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int j;

	while (--argc)
	{
		j = 0;
		while (argv[argc][j])
		{
			ft_putchar(argv[argc][j++]);
		}
		ft_putchar('\n');
	}
}
