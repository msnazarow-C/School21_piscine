/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 22:49:10 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 00:44:47 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include "unistd.h"

int g_i;
int		arg(char *str);
int		eval_expr(char *str);
int		expr2(char *str);
void	ft_putchar(char c);
int		isd(char c);
int		isop(char c);
int		valiable(char c);
void	ft_putnbr(int nb);
int		calc(int a, int b, char c);
void	skip(char *str);

#endif
