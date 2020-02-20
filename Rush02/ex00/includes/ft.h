/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 05:09:16 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/16 08:08:50 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define STRING	30000 
# include "unistd.h"
# include "stdlib.h"

typedef struct		s_list
{
	struct s_list	*next;
	char			*data;
}					t_list;

t_list				*ft_create_elem(char *data);
void				ft_list_push_back(t_list **l, char *data);
void				ft_putstr(char *str);
t_list				*ft_stdin(void);
int					ft_strlen(char *str);
void				ft_print_list(t_list *list);
char	            *ft_strcpy(char *dest, char *src);
char	            *ft_strdup(char *src);
int					lines(t_list *list);
int					collums(t_list *list);
void				ft_putnbr(int a);
void				ft_putchar(char c);

#endif
