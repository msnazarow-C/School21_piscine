/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 02:16:47 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 23:39:09 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H
# include "unistd.h"
# include "fcntl.h"
# include "errno.h"
# include "stdlib.h"

# define STRING 32000

void	ft_puterror(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		print_error(int err,char *argv);
int		ft_abs(int a);
int		ft_atoi(char *c);
void	ft_putnbr(int a);
void	ft_putstr(char *c);
void	ft_buffer(int n, int f, char *argv);
void	ft_checks(int n, int f, char *argv);
void	ft_while(int argc, char** argv, int n);

#endif
