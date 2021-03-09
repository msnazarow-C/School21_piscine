/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:34:38 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/05 23:31:46 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc < 0)
		return (0);
	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
	}
}
