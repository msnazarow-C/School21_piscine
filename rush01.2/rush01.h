/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:11:30 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/10 04:36:16 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

void	ft_putchar(char c);
void	ft_print_double_array(char ***input, int x, int y);
char	***input_values(char **vs, int x, int y);
void	ft_print_double_array2(char ***input, int x, int y);
void	ft_putstr(char* c);
char	***create(char ****in);
char	***copy(char ****values, char ****in);к
void	check(char ***values, int x);
void	check2(char ***values, int x);
void	check3(char ***values, int x);
void	check4(char ***values, int x);
char	***try(char ***values, int 	**x,int * counter);
int		validate(char ***values, int x);
int		ft_strlen(char *str);
int		check6(char ***values);
void	ft_putnbr(int a);
#endif
