/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 02:49:26 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/07 03:15:39 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H

# define FT_PERSO_H
# include "string.h"

struct	s_ijustwhattohavesomepoints
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
};
typedef struct s_ijustwhattohavesomepoints		t_perso;

# define SAVE_THE_WORLD "SAVE THE WORLD"
#endif
