/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 02:46:00 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/07 09:21:33 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN(x) ((x) % 2) 
# include "unistd.h"

enum	e_lalka {FALSE, TRUE};
void ft_putstr(char *str);

typedef enum lalka	t_bool;
#endif
