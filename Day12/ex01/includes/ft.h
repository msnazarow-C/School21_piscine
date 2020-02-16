/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 02:16:47 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/13 12:49:49 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H
# include "unistd.h"
# include "fcntl.h"
# define STRING 32000

void	ft_puterror(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		check_input(char *argv);

#endif
