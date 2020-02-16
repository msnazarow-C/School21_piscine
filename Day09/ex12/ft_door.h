/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   door.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 04:07:10 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/07 04:12:01 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H

# define FT_DOOR_H
# include "unistd.h"

void ft_putstr(char *str);
enum	e_iwhantodie {FALSE, TRUE};
enum	e_whyamisounlucky {CLOSE, OPEN};
struct	s_justgivemepointsbro
{
	enum e_whyamisounlucky state;
};

typedef enum e_iwhantodie	t_bool;
typedef struct s_justgivemepointsbro	t_door;

#endif
