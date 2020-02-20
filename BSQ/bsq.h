/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:16:27 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 01:16:29 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include "fcntl.h"
# define STRING 10000
# include "unistd.h"
# include "stdlib.h"
# include "time.h"

typedef struct		s_max
{
	int x;
	int y;
	int count;
}					t_max;

typedef struct		s_size
{
	int collums;
	int lines;
}					t_size;

typedef struct		s_list
{
	struct s_list	*next;
	char			*data;
}					t_list;

t_max				*create_list(void);
void				print_bsq(char *pb, t_size size, t_max max);
t_max				max_count(t_max max, int i, int j, int count);
void				ft_putchar(char c);
void				ft_putnbr(int a);
int					ft_atoil(char **str, int len, char c);
char				*ft_strncpy2(char *dest, char **src, unsigned int n);
int					bsq(char *pb, int **map, t_size size, char c);
int					make_tab(int f);
int					min(int a, int b, int c);
void				print_tab(int **tab, int lines, int collums);
void				ft_free(int **tab, int lines);
t_list				*ft_create_elem(char *data);
void				ft_list_push_back(t_list **l, char *data);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(char *src);
int					ft_strlen(char *str);
void				ft_putstr(char *str);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
int					get_int_symbols(char **str, int len, int *a, char *c);
void				change_pb(char *pb, t_max max, char c);

#endif
