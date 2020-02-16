/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:02:50 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/05 23:32:15 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	if (argc < 0)
		return (0);
	i = 0;
	if (argc != 0)
		while (argv[0][i])
			ft_putchar(argv[0][i++]);
	ft_putchar('\n');
}
