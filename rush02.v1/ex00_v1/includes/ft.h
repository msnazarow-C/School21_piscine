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
void    print_one_rush(int number_of_rush, int quantity_of_rushes, int collums, int lines);
void    print_all(void);
void    compare(t_list *list, int collums, int lines);
int first_line(t_list *list, int collums, int lines, char *a, char *b, char *c);
int middle(t_list *list, int collums, int lines, char *a);
int last_line(t_list *list, int collums, int lines, char *a, char *b, char *c);

int *rush[5];

#endif
