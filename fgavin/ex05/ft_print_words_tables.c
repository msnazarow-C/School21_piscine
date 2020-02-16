/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgavin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 23:11:34 by fgavin            #+#    #+#             */
/*   Updated: 2020/02/06 23:17:59 by fgavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	while (**tab)
	{
		ft_putstr(*tab++);
	}
}
